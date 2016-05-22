//Organism.cpp by Kostya Kozachuck as neurocod - 2016.05.22 14:16:41
#include "pch.h"
#include "Organism.h"

Organism::Organism(const Organism*father, const Organism* mother, const QDateTime & birth):
	_father(father),
	_mother(mother),
	_birth(birth)
{
}
