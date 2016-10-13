/*
Author: Visar Shehu
Email: v.shehu@seeu.edu.mk
File created:  28.9.2016
Last revision: 28.9.2016
*/
#include <iostream>

using namespace std;


/*
The following example illustrates how pointers are used in C++
Note the usage of signs * (points to) and & (address of)

Shembulli i meposhtem ilustron perdorimin e treguesve (pointers)
ne C++. Vereni se si perdoren shenjat * (tregon ne) dhe & (adresa e)
*/
int main()
{
	int valueA = 33;
	int valueB = 74;

	//Declaring two pointers of type int
	int *pA;
	int *pB;

	//Read the following as: pA is pointing to the memory address of valueA
	pA = &valueA;
	pB = &valueB;

	cout << "Value of variable A is: "
		<< valueA
		<< endl
		<< "Value of variable B is: "
		<< valueB
		<< endl
		<< "========================================================="
		<< endl
		<< endl;

	cout << "Address of variable A is: "
		<< &valueA
		<< endl
		<< "Address of variable B is: "
		<< &valueB
		<< endl
		<< "========================================================="
		<< endl
		<< endl;

	cout << "Pointer A points to : "
		<< pA
		<< endl
		<< "Pointer B points to : "
		<< pB
		<< endl
		<< "========================================================="
		<< endl
		<< endl;

	cout << "Value  of address location where pointer A points is: "
		<< *pA
		<< endl
		<< "Value  of address location where pointer B points is: "
		<< *pB
		<< endl
		<< "========================================================="
		<< endl
		<< endl;
}