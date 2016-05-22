//Gene.cpp by Kostya Kozachuck as neurocod - 2016.05.22 14:17:37
#include "pch.h"
#include "Gene.h"

const Gene Gene::MaleGeneInstance(QLatin1String("isMale"));
Gene::Gene(): _data(QLatin1String("")) {
}
Gene::Gene(const Data & data): _data(data) {
}
bool Gene::operator==(const Gene & other)const {
	return _data==other._data;
}
bool Gene::operator<(const Gene & other)const {
	return _data<other._data;
}