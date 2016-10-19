/*
Author: Visar Shehu
Email: v.shehu@seeu.edu.mk
File created:  19.10.2016
Last revision: 19.10.2016
*/
#include <iostream>
#include <string>
using namespace std;

struct Employee
{
	int id;
	int workedHours;
	float payHours;

	float Salary()
	{
		return workedHours * payHours;
	}

	void PrintInformation()
	{
		cout << "Employee ID: " << id << endl
			<< "Worked hours: " << workedHours << endl
			<< "Salary: " << Salary() << endl;
	}
};

void maxSalary(Employee *employees, int n)
{
	Employee highestPaid = employees[0];
	for (int i = 1; i < n; i++)
	{
		if (employees[i].Salary() > highestPaid.Salary())
		{
			highestPaid = employees[i];
		}
	}
	cout << "The highest paid employee is: ";
	highestPaid.PrintInformation();
}
int main()
{
	Employee emps[] = {
			{ 111, 33, 7},
			{ 123, 22, 6},
			{ 136, 57, 5}
	};

	maxSalary(emps, 3);
	 
}