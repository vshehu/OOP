#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

struct Student
{
	string ID;
	string FirstName;
	string LastName;
	string Email;
	string Address;
	string Birthday;
	string Department;



void PrintInfo()
	{
		cout << "\n ID : " << ID 
		<< "\n FirstName : " << FirstName
		<< "\n  LastName : " << LastName 
		<< "\n Email : " << Email
		<< "\n address : " << Address
		<< "\n Birthday : " << Birthday
		<< "\n Department : " << Department <<endl;
		
	}
};

struct StudentManager
{
	Student *students;
	int student_nr;

	bool Contains(string base_string, string search_criteria)
{
	transform(base_string.begin(), base_string.end(), base_string.begin(), ::tolower);
	transform(search_criteria.begin(), search_criteria.end(), search_criteria.begin(), ::tolower);

	if (base_string.find(search_criteria) != string::npos)
	{
		return true;
	}
	else
	{
		return false;
	}
}

	void Search(string search_criteria)
	{
		 
		for (int i = 0; i < student_nr; i++)
		{
			if (Contains(students[i].FirstName, search_criteria) || 
				Contains(students[i].LastName, search_criteria) ||
				Contains(students[i].ID, search_criteria))
			{
				students[i].PrintInfo();
			}
		
		}
	}
};

struct LibraryMenagment {

Student st ;
string books ;
string author;

};

