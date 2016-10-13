/*
Author: Visar Shehu
Email: v.shehu@seeu.edu.mk
File created:  28.9.2016
Last revision: 28.9.2016
*/
#include <iostream>

using namespace std;

/*
This function illustrates the behavior of C++ when arrays are passed to a function.
The function will simply double all values of the array.
Note that this behaviour differs from the traditional handling of primitive types 
(int, float, double...). It seems like the array is passed by reference and not by
value (even though we do not use the & symbol before the parameter). Why?

Ky funksion ilustron sjelljen e C++ kur vargu eshte parameter hyres ne funksion. 
Funksioni do te dyfishoje te gjithe vlerat e vargut.
Do te vereni se sjellja ndryshon nga menyra tradicionale kur parameter hyres jane 
variabla primitive (int, float, double). Ne keto raste rezultati duket sikur vargu
percillet me reference dhe jo me vlere (Edhe pse nuk perdorim simbolin & para 
parametrit). Pse?
*/
void increment_values(int array[], int nr_values)
{
	for (int i = 0; i < nr_values; i++)
	{
		array[i] = array[i] * 2;
	}
}

int main()
{
	int simple_array[] = { 5, 5, 5, 6, 7, 8, 3, 4, 5 };
	int n = 9;

	cout << "Printing the values of the array:"
		<< endl;
	//Printing the values of the array:
	for (int i = 0; i < 9; i++)
		cout << simple_array[i]
			<< ", ";

	cout << endl
		<< endl;
	
	increment_values(simple_array, n);

	cout << "Printing the values of the array after calling the function:"
		<< endl;
	//Printing the values of the array:
	for (int i = 0; i < 9; i++)
		cout << simple_array[i]
		<< ", ";
}