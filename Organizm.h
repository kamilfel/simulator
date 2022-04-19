#pragma once
//#include "Swiat.h"
using namespace std;

struct point {
	int x;
	int y;
};
class Organizm
{
protected:
	int sila = 0;
	int inicjatywa = 0;
	point polozenie = { 0,0 };
public:
	Organizm()
	{

	}
	virtual void akcja() = 0;
	virtual void kolizja() = 0;
	virtual void rysowanie(char*, point) = 0;
};