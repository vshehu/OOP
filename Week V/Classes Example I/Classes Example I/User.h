#include <string>
using namespace std;

class User
{
private:
	string _id;
	string _firstname;
	string _lastname;
	string _email;
	string _password;
public:
	string getID();
	void setID(string id);

	string getFirstName();
	void setFirstName(string firstName);

	string getLastName();
	void setLastName(string lastName);

	string getEmail();
	void setEmail(string email);

	void setPassword(string password);
};