#include <iostream>
#include <conio.h>
#include "Wilk.h"

using namespace std;

int main()
{
	Swiat gra(20,20);
	gra.WykonajTure();
	Wilk w1{ {2,2}, &gra};
	return 0;
}