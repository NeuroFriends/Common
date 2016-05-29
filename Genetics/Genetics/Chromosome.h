//Chromosome.h by Kostya Kozachuck as neurocod - 2016.05.22 14:17:22
#pragma once
#include "Gene.h"
#include "MutationGenerator.h"

class ChromosomePair;
class Chromosome {
	public:
		Chromosome();
		virtual ~Chromosome() {}

		using Pair = ChromosomePair;
		bool contains(const Gene & gene)const;

		QList<Gene> _p;//petit - short part of chromosome - according to https://ru.wikipedia.org/wiki/Локус
		QList<Gene> _q;//long part of chromosome
};
struct ChromosomePair {
	Chromosome _fromMother;
	Chromosome _fromFather;

	Chromosome makeOneChromosomeForOffspring(bool isSexPair, MutationGenerator & generator)const;
};