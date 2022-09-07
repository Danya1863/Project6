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
	void setx()
	{
		cout << "x=";
		cin >> x;
	}
	void getx()
	{
		cout << "x=" << x << endl;
	}
	void sety()
	{
		cout << "y=";
		cin >> y;
	}
	void gety()
	{
		cout << "y=" << y << endl;
	}
};
class car
{
	string engine;
	int patroll;
public:
	car()
	{
		engine = "engine";
		patroll = 0;
	}
	car(string e,int p)
	{
		engine = e;
		patroll = p;
	}
	void init() {
		cout << "engine: " << endl;
		cin >> engine;
		cout << "patroll" << endl;
		cin >> patroll;
	}
	void print()
	{
		cout << "engine: " << engine << endl;
		cout << "patroll: " << patroll << endl;
	}
};
int main()
{
	point obj2;
	obj2.init();
	obj2.print();
	car obj1;
	obj1.init();
	obj1.print();
}