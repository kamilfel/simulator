#pragma once
#include <iostream>
#include <conio.h>
#include "Swiat.h"
#include "Wilk.h"

using namespace std;

int main()
{
	Swiat gra(20,20);
	gra.WykonajTure();
	Wilk w1{ {2,2}};
	int tab[3][3];
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			tab[i][j] = i + 2 * j;
	int* wsk = *tab;

	return 0;
}