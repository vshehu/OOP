/*
Author: Visar Shehu
Email: v.shehu@seeu.edu.mk
File created:  19.10.2016
Last revision: 19.10.2016
*/
#include <iostream>
#include <string>
using namespace std;

struct ADRESA
{
	int housenumber;
	string streetname;
	string zipcode;
};

int main()
{
	ADRESA a1, a2, a3;
	ADRESA a[3];
	for (int i = 0; i < 3; i++)
	{ 
		cout << "Regjistro vlerat per adresen e pare:"
			<< endl
			<< "Rruga?: ";
		cin >> a[i].streetname;
		cout << endl
			<< "Numri: ";
		cin >> a[i].housenumber;
		cout << endl
			<< "ZIP Kodi: ";
		cin >> a[i].zipcode;
	}

	cout << "Adresat e regjistruara jane: "
		<< endl;

	for (int i = 0; i < 3; i ++ )
	{
		//Checking if house number is even
		if (a[i].housenumber % 2 == 0)
		{ 
			cout << a[i].streetname << " " 
				<< a[i].housenumber << " "
				<< a[i].zipcode << endl;
		}
	}	
}

	 