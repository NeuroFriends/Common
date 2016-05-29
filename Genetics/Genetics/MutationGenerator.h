//MutationGenerator.h by Kostya Kozachuck as neurocod - 2016.05.29 15:08:43
#pragma once
#include "MutationRates.h"

class MutationGenerator {
	public:
		MutationGenerator();
		virtual ~MutationGenerator() {}

		MutationRates _settings;
		bool generateCrossover();
		bool chooseMaleChromosome();
	protected:
		std::mt19937 _rand;

		bool rand(qreal p);//0<=p<=1
};