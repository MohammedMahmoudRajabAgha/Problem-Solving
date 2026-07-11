#include <iostream>

using namespace std;

class clsPerson
{
private:
    int _ID;
    string _FirstName;
    string _LastName;
    string _Email;
    string _Phone;


public:

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
        cout << "\nPerson Info : ";
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

    void Print()
    {
        cout << "\nStudent Info : ";
        cout << "\n_____________________";
        cout << "\nID          : " << ID();//  ==  clsPerson::ID();
        cout << "\nFirst Name  : " << FirstName();
        cout << "\nLast Name   : " << LastName();
        cout << "\nFull Name   : " << FullName();
        cout << "\nEmail       : " << Email();
        cout << "\nPhone       : " << Phone();
        cout << "\nDepartement : " << Departement();//    ==   clsStudent::Departement();
        cout << "\n_____________________\n";
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

    void Print()
    {
        cout << "\nEmployee Info : ";
        cout << "\n_____________________";
        cout << "\nID          : " << ID();//  ==  clsPerson::ID();
        cout << "\nFirst Name  : " << FirstName();
        cout << "\nLast Name   : " << LastName();
        cout << "\nFull Name   : " << FullName();
        cout << "\nEmail       : " << Email();
        cout << "\nPhone       : " << Phone();
        cout << "\nTitle       : " << Title();// ==  clsEmployee::Title();
        cout << "\nDepartement : " << Departement();
        cout << "\nSalary      : " << Salary();
        cout << "\n_____________________\n";
    }


};

class clsDeveloper :public clsEmployee
{
    string _MainProgrammingLanguage;

public:

    clsDeveloper(int ID, string FirstName, string LastName, string Email, string Phone, string Title, string Departement, float Salary, string MainProgrammingLanguage)
        : clsEmployee(ID, FirstName, LastName, Email, Phone, Title, Departement, Salary)
    {
        _MainProgrammingLanguage = MainProgrammingLanguage;
    }

    void SetMainProgrammingLanguage(string MainProgrammingLanguage)
    {
        _MainProgrammingLanguage = MainProgrammingLanguage;
    }

    string MainProgrammingLanguage()
    {
        return _MainProgrammingLanguage;
    }

    void Print()
    {
        cout << "\nDeveloper Info : ";
        cout << "\n__________________________________________";
        cout << "\n ID                        : " << ID();//  ==  clsPerson::ID();
        cout << "\n First Name                : " << FirstName();
        cout << "\n Last Name                 : " << LastName();
        cout << "\n Full Name                 : " << FullName();
        cout << "\n Email                     : " << Email();
        cout << "\n Phone                     : " << Phone();
        cout << "\n Title                     : " << Title();// ==  clsEmployee::Title();
        cout << "\n Departement               : " << Departement();
        cout << "\n Salary                    : " << Salary();
        cout << "\n Main Programming Language : " << MainProgrammingLanguage();
        cout << "\n__________________________________________";

    }
};

int main()
{

    clsDeveloper D1(743, "Mohammed", "Rajab Agha", "mohammad970@gmail.com", "0988212317", "CEO", "Programming", 10000, "C++ & C#");

    D1.Print();

    D1.clsEmployee::Print();

    D1.clsPerson::Print();


    D1.SendSMS("Hi mr Developer :-)");


    system("pause>0");
    return 0;
}
