#ifndef GRADE_H
#define GRADE_H
/*We had to be creative, since no submissions are added in the project and can't get the information.*/

#include <iostream>
#inlude <string>
using namespace std;

struct Grade
{
	int grade;
	int id;
	int credits;
	int courseId;
	int studentId;

	void PrintInfo()
	{
		cout << "Grade: " << grade << " Credits: " << credits << endl;
	}
};

struct Student
{
	int id;
	string name;

	void PrintInfo()
	{
		cout << "Name: " << name << endl;
	}
};

struct Course
{
	int id;
	string name;

	void PrintInfo()
	{
		cout << "Course Name: " << name << " - ";
	}
};

struct TranscriptManager
{
	Grade *grades;
	int nr_grades;

	Student *students;
	int nr_students;

	Course *courses;
	int nr_courses;

	bool Contains(string text, string search)
	{
		if (text.find(search) != string::npos)
			return true;
		else
			return false;
	}

	void Search(string search_criteria)
	{
		for (int i = 0; i < nr_students; i++)
		{
			if (Contains(students[i].name, search_criteria))
			{
				students[i].PrintInfo();
				for (int j =0; j < nr_grades; j++)
				{
					if(grades[j].studentId == students[i].id)
					{
						for (int k = 0; k < nr_courses; k++) {
							if (grades[j].courseId == courses[k].id) {
								courses[k].PrintInfo();
							}
						}
						grades[j].PrintInfo();
					}
				}
			}
		}
	}

};

int main()
{
	TranscriptManager tm;

	Student students[] = {
		{ 124431, "Anastasija Mitrevska" },
		{ 124866, "Sandra Andovska" },
		{ 124384, "Ervin Shaqiri" }
	};

	Course courses[] = {
		{ 1, "Statistics and probability" },
		{ 2, "Research methodologies in business" },
		{ 3, "Computer programming 2" },
		{ 4, "Financial accounting" },
		{ 5, "Free elective" }
	};
	
	Grade grades[] = {
		{8, 1, 6, 1, 124431},
		{7, 2, 6, 2, 124431},
		{6, 3, 6, 3, 124431},
		{6, 4, 6, 4, 124331},
		{10, 5, 3, 5, 124331},

		{ 9, 1, 6, 1, 124866 },
		{ 8, 2, 6, 2, 124866 },
		{ 6, 3, 6, 3, 124866 },
		{ 7, 4, 6, 4, 124866 },
		{ 10, 5, 3, 5, 124866 },

		{ 6, 1, 6, 1, 124384 },
		{ 7, 2, 6, 2, 124384 },
		{ 6, 3, 6, 3, 124384 },
		{ 8, 4, 6, 4, 124384 },
		{ 9, 5, 3, 5, 124384 }
	};

	tm.grades = grades;
	tm.nr_grades = 15;

	tm.students = students;
	tm.nr_students = 3;

	tm.courses = courses;
	tm.nr_courses = 5;

	string search;
	cout << "Write a name or surname of a student to get his transcript: " << endl;

	while (true)
	{
		cin >> search;
		tm.Search(search);
	}

	cin.get();
	cin.get();
	
	return 0;
}
