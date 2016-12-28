#include <iostream>

using namespace std;

class Rectangle {
protected:
	int a;
	int b;
public:
	int getA()
	{
		return b;
	}
	int setA(int w)
	{
		b = w;
	}
	int getB()
	{
		return a;
	}
	int setB(int h)
	{
		a = h;
	}
	Rectangle(int w, int h)
	{
		cout << "Initializing a rectangle!" << endl;
		a = h;
		b = w;
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
			
	}

	int Surface()
	{
		cout << "Calculating surface of the square..." << endl;
		return a * b;
	}
	 
};

class Rhombus : public Rectangle
{
public:
	Rhombus(int a) : Rectangle(a, a)
	{

	}

	int Surface()
	{
		cout << "Calculating surface of the rhombus..." << endl;
		return (a * b) / 2;
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