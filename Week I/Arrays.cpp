/*
Author: Visar Shehu
Email: v.shehu@seeu.edu.mk
File created:  28.9.2016
Last revision: 28.9.2016
*/
#include <iostream>

using namespace std;

/*
This function will accept an array, and return the sum of all 
values from that array.
The array is passed in a traditional form. Note that the length 
of the array is not defined in the entry parameter.

Ky funksion pranon nje varg, dhe kthen shumen e gjithe vlerave nga 
vargu. Vargu i jepet funksionit si parameter hyres ne forme 
tradicionale. Shenim: gjatesia e vargut nuk definohet gjate deklarimit
te parametrit. 
*/
int sum_traditional(int grades[], int nr_of_grades)
{
	int sum = 0;
	for (int i = 0; i < nr_of_grades; i++)	
	{
		sum += grades[i];
	}
	return sum;
}

/*
This function will accept an array, and return the sum of all
values from that array.
The array is passed as a pointer. Note that the length
of the array is not defined in the entry parameter.

Ky funksion pranon nje varg, dhe kthen shumen e gjithe vlerave nga
vargu. Vargu i jepet funksionit si parameter hyres ne forme
te pointerit. Shenim: gjatesia e vargut nuk definohet gjate deklarimit
te parametrit.
*/
int sum_pointer_pass(int *grades, int nr_of_grades)
{
	int sum = 0;
	for (int i = 0; i < nr_of_grades; i++)
	{
		sum += grades[i];
	}
	return sum;
}
int main()
{
	int grades[] = { 10, 10, 5, 5, 6, 7, 8 };
	int n = 7;

	cout<<"Sum when passing the array in a traditional fashion: \t"
		<<sum_traditional(grades, n)
		<<endl;

	cout << "Sum when passing the array as a pointer: \t"
		<< sum_pointer_pass(grades, n)
		<< endl;

}