#include <iostream>
#include<string>
#include"clsPerson.h";
#include"clsAddress.h";

using namespace std;

int RandomNumber(int From, int To)
{
    int randNum = 0;

    randNum = From + rand() % (To - From + 1);

    return randNum;
}

int main()
{
    srand(time(0));

    clsAddress Address1("Damascus,Sahnaya", "Albayan", "5555", "1111");

    Address1.Print();

    Address1.AddressLine1 = "Dear Al_ZOOR";
    Address1.Print();

    cout << "\n\n*************************************************************\n\n";

    clsPerson Person1("202411" + to_string(RandomNumber(1, 500)), "Mohammed", "Agha");

    Person1.Print();

    Person1.FirstName = "Omar";
    Person1.LastName = "KOKO";
    
    Person1.Print();

    system("pause>0");
    return 0;
}