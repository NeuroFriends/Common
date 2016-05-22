//Organism.h by Kostya Kozachuck as neurocod - 2016.05.22 14:16:41
#pragma once
#include "Genome.h"

class Organism {
	public:
		Organism(const Organism*father, const Organism* mother, const QDateTime & birth);
		virtual ~Organism() {}

		const QDateTime _birth;
		QDateTime _death;
		Genome _genome;
		const Organism* const _father = 0;
		const Organism* const _mother = 0;
};