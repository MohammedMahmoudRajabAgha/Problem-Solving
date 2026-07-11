#include <iostream>

using namespace std;

class clsPerson
{
public:

    string FirstName = "Mo";
    string LastName = "Agha";

    void Print()
    {
        cout << "Hi, I'm a Person!\n ";
    }
};

class clsEmployee : public clsPerson
{
public:

    string Title = "CEO";

    void Print()
    {
        cout << "Hi, I'm an Employee.\n";
    }
};

class clsStudent : public clsPerson
{
public:

    string UniName = "AIU";

    void Print()
    {
        cout << "Hi, I'm a Student.\n";
    }
};

int main()
{
    clsEmployee Employee1;
    clsStudent Student1;

    //Static Binding
    Employee1.Print();
    Student1.Print();

    //Up Casting 
    clsPerson* Person1 = &Employee1;
    clsPerson* Person2 = &Student1;

    //Dynamic Binding
    Person1->Print();
    Person2->Print();

    cout << Person1->FirstName << endl;
    cout << Person2->LastName << endl;

    system("pause>0");
    return 0;
}

