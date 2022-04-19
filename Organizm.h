#include "Swiat.h"
using namespace std;

class Organizm
{
private:
	int sila = 0;
	int inicjatywa = 0;
	point polozenie = { 0,0 };
	//Swiat& swiat;
public:
	Organizm();
	virtual void akcja();
	virtual void kolizja();
};