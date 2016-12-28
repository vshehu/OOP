#include <iostream>
#include <string>
using namespace std;


class Student
{
private:
  string Name;
  string Surname;
  float GPA;
  int ID;
public:
  Student(string _name, string _surname, float _GPA, int _id)
    {
      Name = _name;
      Surname = _surname;
      GPA = _GPA;
      ID = _id;
    }

    void setName(string _name)
    {
        Name = _name;
    }
    string getName()
    {
      return Name;
    }

    void setID(int _id)
    {
      ID = _id;
    }
    int getID()
    {
      return ID;
    }

    void setGPA(int _gpa)
    {
      GPA = _gpa;
    }
    float getGPA()
    {
      return GPA;
    }
    void setSurname(string _surname)
    {
      Surname = _surname;
    }
    string getSurname()
    {
      return Surname;
    }

    void PrintInfo()
    {
      cout<<"Student name: "<<name<<endl
        <<"Last name: "<<Surname<<endl
        <<"GPA: "<<GPA <<endl
        <<"ID: "<<ID<<endl;
    }
};


int main()
{

}
