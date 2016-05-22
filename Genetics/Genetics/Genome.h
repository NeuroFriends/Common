//Genome.h by Kostya Kozachuck as neurocod - 2016.05.22 14:17:08
#pragma once
#include "Chromosome.h"

class Genome {
	public:
		Genome();
		virtual ~Genome() {}

		Chromosome::Pair* sexChromosomes()const;
		bool isMale()const;
		QList<Chromosome::Pair*> _chromosomes;
};