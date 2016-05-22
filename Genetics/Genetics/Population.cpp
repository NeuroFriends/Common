//Population.cpp by Kostya Kozachuck as neurocod - 2016.05.22 14:22:21
#include "pch.h"
#include "Population.h"

Population::Population() {
}
Population::~Population() {
	auto all = QSet<Organism*>::fromList(_alive);
	all << QSet<Organism*>::fromList(_dead);
	qDeleteAll(all);
}