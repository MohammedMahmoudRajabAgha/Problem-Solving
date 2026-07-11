#include <iostream>

using namespace std;

class clsPerson
{
public:

    string FullName = "Mohammed Rajab Agha";
};

class clsEmployee :public clsPerson
{
public:
    string Title = "CEO";
};


int main()
{
    // 1

    clsEmployee Employee1;

    //Up Casting
    clsPerson* P1 = &Employee1;

    cout << P1->FullName << endl;

    P1->FullName = "KOKO";

    cout << P1->FullName << endl;

    // 2

    clsPerson Person2;

    cout << Person2.FullName << endl;

    //DownCasting -> Error
   
    //clsEmployee* E1 = &Person2;

    system("pause>0");
    return 0;
}

