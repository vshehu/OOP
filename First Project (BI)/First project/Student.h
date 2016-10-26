#include <string>
#include<iostream>

#ifndef STUDENT_H
#define STUDENT_H
using namespace std;

struct PlaceOfLiving
{
	string City;
	string Country;
	string Street;
};

struct Student
{
	string ID;
	string FirstName;
	string LastName;
	string Department;
	string email;
	PlaceOfLiving Addres;
	string Birthday;
};



void SeerchItUp(Student *a, double n)

{
	cout<<"Enter a search term..."<<endl;
	string m;
	cout<<endl;
	cin>>m;
	for(double i=0; i<n;i++)
	{
		if(a[i].ID==m)
		a[i].PrintInformation();
		
		else if(a[i].FirstName==m)
		a[i].PrintInformation();
		
		else if(a[i].LastName==m)
		a[i].PrintInformation();

	}
}

#endif
