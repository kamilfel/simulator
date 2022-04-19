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
public:
	void RysujSwiat();
	void WykonajTure();
};