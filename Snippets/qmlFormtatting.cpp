/* console.trace():
before we have:
selectFirstItem (qrc:/qml/ui/accordion/SomeLongName.qml:179)
selectFirstItemBoth (qrc:/qml/ui/accordion/OtherSomeLongName.qml:164)
onTriggered (qrc:/qml/ui/accordion/OtherSomeLongName23.qml:202)

After maybeChangeQmlFormatting() we have:
selectFirstItem  qrc:/qml/ui/accordion/ SomeLongName.qml:179
selectFirstItemBoth  qrc:/qml/ui/accordion/ OtherSomeLongName.qml:164
onTriggered  qrc:/qml/ui/accordion/ OtherSomeLongName23.qml:202
*/
void maybeChangeQmlFormatting(QString & str) {
	auto lines = str.split("\n");
	for(QString & line: lines) {
		if (line.endsWith(')') && line.contains(".qml:")) {
			line.chop(1);
			int index = line.indexOf(" (");
			if (-1!=index) {
				line[index+1] = ' ';
			}
			index = line.lastIndexOf('/');
			if (-1!=index) {
				line.insert(index + 1, ' ');
			}
		}
	}
	str = lines.join("\n");
}

QString maybeToHtmlTable(const QString & str) {//changes text from maybeChangeQmlFormatting to html table
	auto lines = str.split("\n");
	for(QString & line: lines) {
		if (!line.contains("  ") || !line.contains(".qml:"))
			return str;
		line.chop(1);
	}
	QString ret = "<table border=\"1\">";
	for(QString & line: lines) {
		ret += "<tr><td>";

		int index = line.indexOf("  ");
		Q_ASSERT(-1 != index);
		line.remove(index, 2);
		line.insert(index, "</td><td>");
		index = line.lastIndexOf('/');
		if (-1!=index) {
			line.insert(index + 1, ' ');
		}
		ret += line;
		ret += "</td></tr>";
	}
	ret += "</table>";
	return ret;
}
