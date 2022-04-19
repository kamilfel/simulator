#include "Zwierze.h"

using namespace std;

class Wilk
	: public Zwierze
{
public:
	Wilk(point pole, Swiat* gra)
	{
		sila = 9;
		inicjatywa = 11;
		polozenie = pole;
		swiat = gra;
	}
};