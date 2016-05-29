//Chromosome.cpp by Kostya Kozachuck as neurocod - 2016.05.22 14:17:22
#include "pch.h"
#include "Chromosome.h"

Chromosome::Chromosome() {
}
bool Chromosome::contains(const Gene & gene)const {
	return _p.contains(gene) || _q.contains(gene);
}
Chromosome ChromosomePair::makeOneChromosomeForOffspring(bool isSexPair, MutationGenerator & settings)const {
	Chromosome c1 = _fromFather;
	Chromosome c2 = _fromMother;
	if(!isSexPair && settings.generateCrossover()) {
		qSwap(c1._p, c2._p);
	}
	if(settings.chooseMaleChromosome())
		return c1;
	return c2;
}