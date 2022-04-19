#pragma once
#include "Zwierze.h"

using namespace std;

class Wilk
	: public Zwierze
{
public:
	Wilk(point pole)
	{
		sila = 9;
		inicjatywa = 11;
		polozenie = pole;
//		swiat = gra;
	}
	void rysowanie(char* uklad, point rozmiar)
	{
		uklad += polozenie.x * 40 + polozenie.y;
		*uklad = 'W';
	}
};