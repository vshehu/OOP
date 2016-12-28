#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	ofstream out("myfile.txt");
	string name = "John";
	string lastname = "Doe";
	string address = "Unknown";
	int age = 55;
	out << name << " "
		<< lastname << " "
		<< address << " "
		<< age << " ";

	out.close();
	string n;
	string l ;
	string a;
	int ag;
	ifstream in("myfile.txt");
	in >> n;
	in >> l;
	in >> a;
	in >> ag;

	cout << n << " "
		<< l << " "
		<< a << " "
		<< ag << " ";

	cin.get();
	cin.get();
}
