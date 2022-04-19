#include "Swiat.h"
#include <iostream>
using namespace std;

Swiat::Swiat(int M = 20, int N = 20)
{
	size.x = M;
	size.y = N;
	for (int i = 0; i < M; i++)
		for (int j = 0; j < N; j++)
			uklad[i][j] = ' ';
	for (int i = 0; i < M; i++) uklad[i][N] = '#';
	for (int i = 0; i < N; i++) uklad[M][i] = '#';
	uklad[M][N] = '#';
}

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