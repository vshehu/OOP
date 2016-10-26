#include <iostream>

#include <algorithm>


#include "Student.h"
#include "Course.h"
#include "Grade.h"
#include "Teacher.h"
#include "Book.h"

using namespace std;

//Also an easier method that you can use
bool contains(string base_string, string search_criteria)
{
	std::transform(base_string.begin(), base_string.end(), base_string.begin(), ::tolower);
	std::transform(search_criteria.begin(), search_criteria.end(), search_criteria.begin(), ::tolower);

	if (base_string.find(search_criteria) != string::npos)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	string aString = "The quick brown fox jumps over the lazy dog!";
	string searchString = "quick";

	//This is for case sensitive searching 
	//The .find() method of string will return the position of the string found
	//string::npos means that the string is not found (usually -1).
	//if found, it will return the position where the string was found
	if (aString.find(searchString) != string::npos)
	{
		cout << "found at position: " <<aString.find(searchString) <<endl<<endl;
	}
	else
	{
		cout << "not found" << endl << endl;
	}

	//This is for case insensitive searching
	//It is implemented by converting both strings to lowercase
	searchString = "FOX";
	std::transform(aString.begin(), aString.end(), aString.begin(), ::tolower);
	std::transform(searchString.begin(), searchString.end(), searchString.begin(), ::tolower);

	if (aString.find(searchString) != string::npos)
	{
		cout << "found at position: " << aString.find(searchString) << endl << endl;
	}
	else
	{
		cout << "not found" << endl << endl;
	}

	//This implementation uses the function contains implemented above
	if (contains("Visar", "isa"))
	{
		cout << "Found" << endl << endl;;
	}
	else
	{
		cout << "Not found" << endl << endl;;
	}
}