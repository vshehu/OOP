#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	fstream file("student_record.txt", ios::app | ios::out | ios::in);
	

	while (true)
	{
		int option;
		cout << endl
			<< "Enter 1 if you want to register a student or 2 if you want to see the gpa of students"
			<< endl;
		cin >> option;

		if (option == 2)
			break;

		string name;
		string last_name;
		int age;
		float gpa;

		cout << endl
			<< "Enter the students name: \t";
		cin >> name;

		cout << endl
			<< "Enter the students last name: \t";
		cin >> last_name;
		
		cout << endl
			<< "Enter the students age: \t";
		cin >> age;

		cout << endl
			<< "Enter the students gpa: \t";
		cin >> gpa;

		file << name
			<< ' '
			<< last_name
			<< ' '
			<< age
			<< ' '
			<< gpa
			<< endl;
	}
	
	float average = 0;
	file.seekg(0);
	int nr_students = 0;
	while (!file.eof())
	{
		string name;
		string last_name;
		int age;
		float gpa;
		file >> name >> last_name >> age >> gpa;
		average = average + gpa;
		nr_students++;
	}
	cout << "The average is: "
		<< average / nr_students;
	cin.get();
	cin.get();
	cin.get();
}