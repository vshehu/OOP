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
	float payHour;

	float Salary()
	{
		return workedHours * payHour;
	}

	void PrintInformation()
	{
		cout << "Employee ID: " << id << endl
			<< "Worked hours: " << workedHours << endl
			<< "Salary: " << Salary() << endl;
	}
};
void maxSalary(Employee e1, Employee e2, Employee e3)
{
	cout << "Employee with highest salary is: " << endl;
	if (e1.Salary() > e2.Salary())
	{
		if (e1.Salary() > e3.Salary())
		{
			e1.PrintInformation();
		}
	}
	else if (e2.Salary() > e3.Salary())
	{
		e2.PrintInformation();
	}
	else
	{
		e3.PrintInformation();
	}
}
int main()
{
	Employee ana = { 111, 33, 5.5 };
	Employee marko = { 112, 40, 7.5 };
	Employee artan = { 113, 60, 10.0 };
	maxSalary(ana, marko, artan);

}