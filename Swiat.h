#include <iostream>
using namespace std;

struct point {
	int x;
	int y;
};

class Swiat
{
private:
	point size = { 20,20 };
	char uklad[40][40];
public:
	Swiat(int,int);
	void RysujSwiat();
	void WykonajTure();
};