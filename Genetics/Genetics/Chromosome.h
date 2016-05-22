//Chromosome.h by Kostya Kozachuck as neurocod - 2016.05.22 14:17:22
#pragma once
#include "Gene.h"

class ChromosomePair;
class Chromosome {
	public:
		Chromosome();
		virtual ~Chromosome() {}

		QList<Gene> _genes;
		using Pair = ChromosomePair;
};
struct ChromosomePair {
	Chromosome _mother;
	Chromosome _father;
};