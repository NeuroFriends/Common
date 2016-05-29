//MutationGenerator.cpp by Kostya Kozachuck as neurocod - 2016.05.29 15:08:43
#include "pch.h"
#include "MutationGenerator.h"

MutationGenerator::MutationGenerator() {
	ASSERT(_rand.min()==0);
}
bool MutationGenerator::rand(qreal p) {
	qreal threshold = p;
	threshold *= _rand.max();
	return _rand() < threshold;
}
bool MutationGenerator::generateCrossover() {
	return rand(_settings._crossover);
}
bool MutationGenerator::chooseMaleChromosome() {
	return rand(0.5);
}
namespace Tests {
	void test_MutationGenerator() {
		MutationGenerator gen;
		const int cycles = 1000;
		gen._settings._crossover = 0;
		for(int i = 0; i<cycles; ++i) {
			ASSERT(gen.generateCrossover()==false);
		}

		gen._settings._crossover = 1;
		for(int i = 0; i<cycles; ++i) {
			ASSERT(gen.generateCrossover()==true);
		}

		gen._settings._crossover = 0.5;
		int counter = 0;
		for(int i = 0; i<cycles; ++i) {
			if(gen.generateCrossover())
				counter++;
		}
		ASSERT(counter>400 && counter<600);
	}
}