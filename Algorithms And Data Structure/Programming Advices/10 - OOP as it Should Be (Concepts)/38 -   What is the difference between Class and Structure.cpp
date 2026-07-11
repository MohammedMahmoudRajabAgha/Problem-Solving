#include <iostream>
#include <iostream>

using namespace std;

struct clsPerson
{
private:
    int _ID;
    string _FirstName;
    string _LastName;
    string _Email;
    string _Phone;


public:

    clsPerson()
    {

    }

    clsPerson(int ID, string FirstName, string LastName, string Email, string Phone)
    {
        _ID = ID;
        _FirstName = FirstName;
        _LastName = LastName;
        _Email = Email;
        _Phone = Phone;
    }

    //read only
    int ID()
    {
        return _ID;
    }

    void SetFirstName(string FirstName)
    {
        _FirstName = FirstName;
    }
    string FirstName()
    {
        return _FirstName;
    }


    void SetLastName(string LastName)
    {
        _LastName = LastName;
    }

    string LastName()
    {
        return _LastName;
    }


    string FullName()
    {
        // return  _FirstName + " " + _LastName;

        return FirstName() + " " + LastName();
    }


    void SetEmail(string Email)
    {
        _Email = Email;
    }

    string Email()
    {
        return _Email;
    }


    void SetPhone(string Phone)
    {
        _Phone = Phone;
    }

    string Phone()
    {
        return _Phone;
    }

    void Print()
    {
        cout << "\nInfo : ";
        cout << "\n_____________________";
        cout << "\nID         : " << _ID;
        cout << "\nFirst Name : " << _FirstName;
        cout << "\nLast Name  : " << _LastName;
        cout << "\nFull Name  : " << FullName();
        cout << "\nEmail      : " << _Email;
        cout << "\nPhone      : " << _Phone;
        cout << "\n_____________________\n";

    }

    void SendEmail(string Subject, string Body)
    {
        cout << "\nThe following message sent sucessfully to email : " << _Email;
        cout << "\nSubject : " << Subject;
        cout << "\nBody : " << Body << "\n";
    }

    void SendSMS(string TextMessage)
    {
        cout << "\nThe following SMS sent sucessfully to Phone : " << _Phone;
        cout << "\n" << TextMessage << "\n";
    }

};

class clsEmployee : public clsPerson
{

    string _Title;
    string _Departement;
    float _Salary;

public:

    clsEmployee(int ID, string FirstName, string LastName, string Email, string Phone, string Title, string Departement, float Salary)
        :clsPerson(ID, FirstName, LastName, Email, Phone)
    {
        _Title = Title;
        _Departement = Departement;
        _Salary = Salary;
    }

    void SetTitle(string Title)
    {
        _Title = Title;
    }

    string Title()
    {
        return _Title;
    }

    void SetDepartement(string Departement)
    {
        _Departement = Departement;
    }

    string Departement()
    {
        return _Departement;
    }

    void SetSalary(float Salary)
    {
        _Salary = Salary;
    }

    float Salary()
    {
        return _Salary;
    }

};

class clsStudent :public clsPerson
{
    string _Departement;

public:

    clsStudent(int ID, string FirstName, string LastName, string Email, string Phone, string Departement)
        :clsPerson(ID, FirstName, LastName, Email, Phone)
    {
        _Departement = Departement;
    }

    void SetDepartement(string Departement)
    {
        _Departement = Departement;
    }

    string Departement()
    {
        return _Departement;
    }
};

struct clsInstructor : public clsEmployee
{
    string _AcademicRank;

public:
    clsInstructor(int ID, string FirstName, string LastName, string Email, string Phone, string Title, string Departement, float Salary, string AcademicRank)
        :clsEmployee(ID, FirstName, LastName, Email, Phone, Title, Departement, Salary)
    {
        _AcademicRank = AcademicRank;
    }

    void SetAcademicRank(string AcademicRank)
    {
        _AcademicRank = AcademicRank;
    }

    string AcademicRank()
    {
        return _AcademicRank;
    }

};

int main()
{

    cout << "\n*****************************************************\n";
    cout << "Employee Class.\n\n";
    clsEmployee Employee1(1, "Mohammed", "Agha", "Mo@gmail.com", "0938959266", "CEO", "Programming", 5000);

    cout << "\n------------------------------\n";


    cout << "\nTitle : " << Employee1.Title() << endl;
    cout << "Departement : " << Employee1.Departement() << endl;
    cout << "Salary : " << Employee1.Salary() << endl;

    cout << "\n\nPrint Method Inheritance From clsPerson Class.\n";
    Employee1.Print();
    cout << "\nError, Where is Title, Departement, Salary Info??!\n";
    cout << "We will Fixe this problem in the next Lesson -)\n";






    cout << "\n*****************************************************\n";
    cout << "Student Class.\n\n";
    clsStudent Student1(202411743, "Ahmed", "Agha", "a@gmail.com", "0999502085", "Programming");

    cout << "\n------------------------------\n";
    Student1.SetDepartement("Informatic Enginerring");

    cout << "\nDept : " << Student1.Departement() << endl;

    Student1.Print();







    cout << "\n*****************************************************\n";
    clsInstructor Instructor1(2000, "Ro", "Agha", "r@gmail.com", "0988212317", "CFO", "Business", 3000, "Professor");

    cout << "\n------------------------------\n";

    cout << "\nDept : " << Student1.Departement() << endl;
    cout << "Academic Rank : " << Instructor1.AcademicRank() << endl;

    Instructor1.Print();

    cout << "\n*****************************************************\n";




    system("pause>0");
    return 0;
}
                                                                                                             
/*
In C++ (Struct = Class) 100%,
Diffrences in C#.

       Struct								            	Class
___________________________________________|_____________________________________
 Keyword : Struct                          |             Keyword : Class
 Default : public                          |             Default : Private
 purpose : Generally for Grouping Data     |             Data Abstraction and more inheritance
 Value type : Stack                        |             Refrence Type : Heap
 Only parametarized Constructors           |             All types of Constructors



 Note : If You Have one Method in Struct ,Transfer Struct -> Class.

*/
                                                                                                                
                                                                                                                
                                                                                                                
                                                                                                                
                                                                                                                
                                                                                                                
                                                                                                                
                                                                                                                
                                                                                                                
                                                                                                                
                                                                                                                
                                                                                                                
                                                                                                                
                                                                                                                
                                                                                                                
                                                                                                                
                                                                                                                                                                                                     
                                                                                     
                                                                                     