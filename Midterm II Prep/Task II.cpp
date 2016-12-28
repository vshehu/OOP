// Author: Besim Sallahi
  Date Created: 28.12.2016
//

#include <iostream>

using namespace std;

class Beta
{
private:
	double _a,_b;
public:
	double getA()
	{
		return _a;
	}

	double getB()
	{
		return _b;
	}

	double SurfaceRectangle()
	{
		return _a * _b;
	}

	Beta(double a, double b)
	{
		_a = a;
		_b = b;
	}
};

int main()
{
	Beta B1(4.12, 5.10);
	Beta B2(2.90, 7.10);
	cout<<"B1.a = "<<B1.getA();
	cout<<"\nB1.b = "<<B1.getB();
	cout<<"\nB2.a = "<<B2.getA();
	cout<<"\nB2.b = "<<B2.getB();
	cout<<"\nB1.Surface Rectangle = "<<B1.SurfaceRectangle();
	cout<<"\nB2.Surface Rectangle = "<<B2.SurfaceRectangle();

	cin.get();
}
