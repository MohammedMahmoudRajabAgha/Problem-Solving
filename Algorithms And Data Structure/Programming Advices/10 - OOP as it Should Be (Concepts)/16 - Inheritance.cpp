#include <iostream>
#include"clsEmployee.h";
#include"clsPerson.h";
using namespace std;



class clsStudent :public clsPerson
{
    string _Departement;

public:

    clsStudent()
    {
        cout << "Student Constructor.\n";
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

class clsInstructor : public clsEmployee
{
    string _AcademicRank;

public:

    clsInstructor()
    {
        cout << "Instructor Constructor.\n";
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
    clsEmployee Employee1;

    cout << "\n------------------------------\n";

    Employee1.SetFirstName("Mohammed");

    Employee1.SetLastName("Agha");

    Employee1.SetEmail("Mo@gmail.com");

    Employee1.SetPhone("0938959266");

    Employee1.SetSalary(5000);

    cout << "\nSalary : " << Employee1.Salary() << endl;

    cout << "\n\nPrint Method Inheritance From clsPerson Class.\n";
    Employee1.Print();
    cout << "\nError, Where is Salary Info??!\n";
    cout << "We will Fixe this problem in the next Lesson -)\n";

    cout << "\n*****************************************************\n";
    cout << "Student Class.\n\n";
    clsStudent Student1;

    cout << "\n------------------------------\n";

    Student1.SetFirstName("Ahmed");
    Student1.SetLastName("Agha");
    Student1.SetEmail("a@gmail.com");
    Student1.SetPhone("0999502085");
    Student1.SetDepartement("Informatic Enginerring");

    cout << "\nDept : " << Student1.Departement() << endl;

    Student1.Print();

    cout << "\n*****************************************************\n";
    clsInstructor Instructor1;

    cout << "\n------------------------------\n";

    Instructor1.SetFirstName("Ro");
    Instructor1.SetLastName("Agha");
    Instructor1.SetEmail("r@gmail.com");
    Instructor1.SetPhone("0988212317");
    Instructor1.SetDepartement("Business");
    Instructor1.SetAcademicRank("Professor");
    cout << "\nDept : " << Student1.Departement() << endl;
    cout << "Academic Rank : " << Instructor1.AcademicRank() << endl;

    Instructor1.Print();

    cout << "\n*****************************************************\n";


    system("pause>0");
    return 0;
}
