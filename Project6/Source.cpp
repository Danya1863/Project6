#include <iostream>
using namespace std;
class point
{
	int x;
	int y;
public:
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
	
}