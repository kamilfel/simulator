#include "Swiat.h"
#include <iostream>
using namespace std;



void Swiat::WykonajTure()
{
	RysujSwiat();
}

void Swiat::RysujSwiat()
{
	for (int i = 0; i <= size.x; i++)
	{
		for (int j = 0; j <= size.y; j++)
		{
			cout << uklad[i][j];
		}
		cout << endl;
	}
}