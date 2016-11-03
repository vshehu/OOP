/*
Author: Besim Sallahi & Nora Volina
Email: bs24491@seeu.edu.mk
File created:  15.10.2016
Last revision: 02.11.2016
*/
#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>

using namespace std;

struct Course {     //Course properties structure
    string ID[10] = { "1s223", "2s33a", "a32b3" ,"hs232" ,"ssw21" , "cs223" , "b2s23" , "hs243" };

    string CourseName[10] = { "Object-Oriented programming" , "Internet technologies",
                            "Calculus and linear algebra" , "Computer architecture" , "Discrete structure",
                            "Advanced IT Skills" , "English for Special Purposes" };

    string CourseDescription[10] = {"Core subject. Here we will learn C++ oriented in Objects",
                              "Core subject. Here we will learn HTML5,CSS and JS",
                              "Core subject. Here we will learn the basics about Math",
                              "Core subject. Learning computer hardware in details.",
                              "Core subject. Learning discrete mathematics",
                              "Free Elective subject. Learning the advanced skills in MS Office",
                              "Elective subject. Impove speaking ang writing of English language" };

    int AvailablePlaces[10] = {10 , 15 , 1 , 10 , 0 , 6 , 3};
};

struct StudentEnrollmentManager     //Enroll or search a course structure
{
    void EnrollCourse(int index);
    void SearchCourse();
};

struct Student      //Students structure
{
	string ID[10]={ "124841" , "124231" , "124421" , "124535" , "124734", "124437" , "124845" };

	string FirstName[10]={ "Fisnik" , "Fisnik" , "Besim" , "Gazmend" , "Ismet", "Edis" , "Lundrim" };

	string LastName[10]={ "Ramushi" , "Ademi" , "Sallahi" , "Ismaili" ,"Qerimi" , "Jusufi", "Miftari" };

	string Email[10]={ "fr24437@seeu.edu.mk", "fa24841@seeu.edu.mk", "bs24491@seeu.edu.mk" ,
                        "gi24313@seeu.edu.mk" , "iq24314@seeu.edu.mk"  , "ej24855@seeu.edu.mk" ,
                        "lm24927@seeu.edu.mk"};

	string Living[10]={"Skopje" , "Skopje" , "Skopje" , "Kumanovo" , "Kumanovo" , "Prilep" , "Kumanovo" };

	string Birthday[10]={"04.04.1997" , "06.07.1992" , "15.03.1997" , "10.12.1994" , "12.1,1995" , "30.11.1996" , "25.05.1996"};

	string Department[10]={ "CST Faculty" ,"CST Faculty" , "CST Faculty" , "CST Faculty" , "CST Faculty",
                            "CST Faculty", "CST Faculty" };
};

    void stuSearch()
    {
        Student studentet;
		string searchS;     //Search criteria

        cout << "\nName of the student you want to search : "<< endl;

        cin>>searchS;
        cout<<endl;

        for (int i=0; i<7; i++)
            {
        //If the student was found
            if ((studentet.FirstName[i].find(searchS) != string::npos))
                {
                cout<<"\n"<<i+1<<"."
                << "FirstName : " << studentet.FirstName[i]
                << "\n  LastName : " << studentet.LastName[i]
                << "\n  ID : " << studentet.ID[i]
                << "\n  Email : " << studentet.Email[i]
                << "\n  Living : " << studentet.Living[i]
                << "\n  Birthday : " << studentet.Birthday[i]
                << "\n  Department : " << studentet.Department[i] <<endl;
                }
            }
    }


int main()
{
    StudentEnrollmentManager student;

    student.SearchCourse();    //Function that searches the course and enrolles it

    stuSearch();    //Function that searches the Students

    cin.get();
    return 0;
}

void StudentEnrollmentManager::SearchCourse()
{
    StudentEnrollmentManager students;
    Course courses;
    string searchC;     //Search criteria
    string option;    //Yes or No (Enroll or not)

    cout<<"Search for the subject: ";
    getline(cin, searchC);
    cout<<endl<<endl;

    for (int i=0; i<7; i++)
    {
    //If the course was found
        if ((courses.CourseName[i].find(searchC) != string::npos))
        {
            cout<<"\n"<<i+1<<".";
            cout<<"Course Name: "<<courses.CourseName[i]<<endl<<endl;
            cout<<"  Course ID: "<<courses.ID[i]<<endl<<endl;
            cout<<"  Description: "<<courses.CourseDescription[i]<<endl;
      //If there are available places enroll
            if (courses.AvailablePlaces[i] > 0)
            {
                cout<<endl<<endl;
                cout<<"There are "<<courses.AvailablePlaces[i]<<" available places in this course."<<endl<<endl;
                cout<<"Would you like to enroll(Y/N): ";
                cin>>option;
                //choose the option
                if (option == "Y" || option == "y")
                    {
                    students.EnrollCourse(i);
                    }
                else if(option == "N" || option == "n")
                    {
                    cout<<"~Exiting search function~"<<endl;    //exit the search
                    }
                else cout<<"\nAttention: You did not type any of the choices! "<<endl;
            }
            else
            {
                cout<<"*There are no available places in this course!"<<endl<<endl;
            }
        }
    }
}

void StudentEnrollmentManager::EnrollCourse(int index)
{
    Course coursesEnroll;
    coursesEnroll.AvailablePlaces[index] = coursesEnroll.AvailablePlaces[index] - 1;        //decreases AvailablePlaces(if enrolled)

    cout<<"*You have succesfully enrolled in the subject :"<<coursesEnroll.CourseName[index]<<endl;
    cout<<"There are "<<coursesEnroll.AvailablePlaces[index]<<" available places left!"<<endl;
}
