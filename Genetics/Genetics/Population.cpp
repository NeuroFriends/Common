//Population.cpp by Kostya Kozachuck as neurocod - 2016.05.22 14:22:21
#include "pch.h"
#include "Population.h"

Population::Population() {
}
Population::~Population() {
	auto listAll = _dead + _alive;
	qDeleteAll(QSet<Organism*>::fromList(listAll));
}