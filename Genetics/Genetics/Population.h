//Population.h by Kostya Kozachuck as neurocod - 2016.05.22 14:22:21
#pragma once
#include "Organism.h"

class Population {
	public:
		Population();
		virtual ~Population();

		int _maxAliveCount = 1000;
	protected:
		QList<Organism*> _alive;
		QList<Organism*> _dead;
};