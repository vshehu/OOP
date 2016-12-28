#include <iostream>

using namespace std;

class Rectangle {
protected:
	int a;
	int b;
public:
	int getA()
	{
		return a;
	}
	void setA(int v)
	{
		a = v;
	}
	int getB()
	{
		return b;
	}
	void setB(int v)
	{
		b = v;
	}
	Rectangle(int _a, int _b)
	{
		cout << "Initializing a rectangle!" << endl;
		a = _a;
		b = _b;
	}

	int Surface()
	{
		cout << "Calculating surface of the recangle..." << endl;
		return a * b;
	}
	int Perimeter()
	{
		cout << "Calculating perimeter..." << endl;
		return 2 * a + 2 * b;
	}
};

class Square : public Rectangle
{
public:
	Square(int a) : Rectangle(a, a)
	{
		cout << "Initializing a square!" << endl;
	}

};

class Rhombus : public Rectangle
{
private:
	int _d1;
	int _d2;
public:
	Rhombus(int d1, int d2, int a) : Rectangle(a, a)
	{
		_d1 = d1;
		_d2 = d2;
	}

	int Surface()
	{
		cout << "Calculating surface of the rhombus..." << endl;
		return (_d1 * _d2) / 2;
	}
	 
};

class Parallelogram : public Rectangle
{
protected:
	int h;
public:
	Parallelogram(int height, int a, int b) : Rectangle(a, b)
	{
		h = height;
	}

	int Surface()
	{
		cout << "Calculating surface of the parallelogram..."<<endl;
		return b * h;
	}
 
};
int main()
{
	Rectangle r(10, 20);
	cout << r.Perimeter()<<endl;
	cout << r.Surface() << endl;

	Square s(10);
	cout << s.Perimeter() << endl;
	cout << s.Surface() << endl;

	Rhombus rh(10);
	cout << rh.Perimeter() << endl;
	cout << rh.Surface() << endl;

	Parallelogram p(10, 15, 20);
	cout << p.Perimeter() << endl;
	cout << p.Surface() << endl;
}