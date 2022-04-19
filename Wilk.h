#pragma once
#include "Zwierze.h"

using namespace std;

class Wilk
	: public Zwierze
{
public:
	Wilk(point pole, char* uklad)
	{
		id = Organizm::nextId++;
		sila = 9;
		inicjatywa = 11;
		polozenie = pole;
//		swiat = gra;
		rysowanie(uklad);
	}
	void rysowanie(char* uklad)
	{
		uklad += polozenie.x * 40 + polozenie.y;
		*uklad = 'W';
	}
};