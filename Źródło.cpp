#pragma once
#include <iostream>
#include <conio.h>
#include "Swiat.h"
#include "Wilk.h"

using namespace std;
int Organizm::nextId = 0;
int main()
{
	Swiat gra(20,20);
	gra.WykonajTure();
	

	return 0;
}