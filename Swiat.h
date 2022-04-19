#pragma once
#include <iostream>
#include <vector>
#include "Wilk.h"
using namespace std;



class Swiat
{
private:
	point size = { 20,20 };
	char uklad[40][40];
	vector <Organizm*> organizmy;

public:
	Swiat(int M = 20, int N = 20)
	{
		size.x = M;
		size.y = N;
		for (int i = 0; i < M; i++)
			for (int j = 0; j < N; j++)
				uklad[i][j] = ' ';
		for (int i = 0; i < M; i++) uklad[i][N] = '#';
		for (int i = 0; i < N; i++) uklad[M][i] = '#';
		uklad[M][N] = '#';

	//	organizmy.push_back(new Wilk({ 2,2 }, *uklad));
		InicjalizujSwiat();

	}
	void RysujSwiat();
	void WykonajTure();
	void InicjalizujSwiat();
};