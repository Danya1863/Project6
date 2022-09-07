#include <iostream>
using namespace std;
class point
{
	int x;
	int y;
public: 
	point()
	{
		x = 0;
			y = 0;
	}
	point(int X, int Y)
	{
		x = X;
		y = Y;
	}
	void print()
	{
		cout << "x=" << x << endl;
		cout << "y=" << y << endl;
	}
	void init()
	{
		cout << "x=";
		cin >> x;
		cout << "y=";
		cin >> y;
	}
};
int main()
{
	
}