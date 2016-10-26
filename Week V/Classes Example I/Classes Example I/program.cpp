#include <iostream>

#include "User.h"

using namespace std;

int main()
{
	User u;
	u.setFirstName("Visar Shehu");
	u.setID("100707");

	cout << u.getID() << endl;
	cout << u.getFirstName() << endl;


	User *u1 = new User;
	u1->setFirstName("John Doe");
	u1->setID("3414321");

	cout << u1->getID() << endl;
	cout << u1->getFirstName() << endl;
}