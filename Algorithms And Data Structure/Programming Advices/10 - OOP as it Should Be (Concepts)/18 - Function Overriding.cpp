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

class clsInstructor : public clsEmployee
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

    void Print()
    {
        cout << "\nInstructor Info : ";
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
        cout << "\nAcademicRank : " << AcademicRank();// ==  clsInstructor::AcademicRank();
        cout << "\n_____________________\n";
    }

};

int main()
{

    clsPerson P1(1, "Ahmed", "Agha", "A@gmail.com", "09450308290");

    P1.Print();


    clsEmployee E1(400, "Mahmoud", "Agha", "Mahmoud@gmail.com", "0999502085", "CEO", "Programming", 5000);
    E1.Print();
    
    E1.clsPerson::Print();

   /* cout << "\n*Employee Class.\n\n";
    clsEmployee Employee1(1, "Mohammed", "Agha", "Mo@gmail.com", "0938959266", "CEO", "Informatic Engineering", 5000);
    Employee1.Print();
   


    cout << "\n*Student Class.\n\n";
    clsStudent Student1(202411743, "Ahmed", "Agha", "a@gmail.com", "0999502085", "Programming");
    Student1.Print();

    cout << "\n*Instructor Class.\n\n";
    clsInstructor Instructor1(2000, "Ro", "Agha", "r@gmail.com", "0988212317", "CFO", "Business", 3000, "Professor");
    Instructor1.Print();


    cout << "\n*****************************************************\n";

    Instructor1.clsPerson::Print();*/

    system("pause>0");
    return 0;
}
