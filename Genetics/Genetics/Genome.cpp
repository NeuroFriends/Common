//Genome.cpp by Kostya Kozachuck as neurocod - 2016.05.22 14:17:08
#include "pch.h"
#include "Genome.h"

Genome::Genome() {
}
Chromosome::Pair* Genome::sexChromosomes()const {
	ASSERT(_chromosomes.count()>=1);
	return _chromosomes.first();
}
bool Genome::isMale()const {
	auto pair = sexChromosomes();
	return pair->_fromFather.contains(Gene::MaleGeneInstance);
}