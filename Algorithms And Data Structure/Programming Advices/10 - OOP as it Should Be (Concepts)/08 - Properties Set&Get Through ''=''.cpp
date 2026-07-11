#include<iostream>
#include"clsPerson.h";

using namespace std;

int main()
{
	clsPerson Person1;

	Person1.SetFirstName("Mohammed");
	cout << Person1.GetFirstName() << endl;

	cout << "\n**************************\n";
	Person1.FirstName = "MO";
	cout << Person1.FirstName << endl;

	cout << "\n**************************\n";
	cout << "\n**************************\n";
	Person1.SetLastName("Agha");
	cout << Person1.GetLastName() << endl;

	cout << "\n**************************\n";
	Person1.LastName = "Rajab Agha";
	cout << Person1.LastName << endl;

	cout << "\n**************************\n";
	cout << "\n**************************\n";
	cout << Person1.GetID() << endl;
	cout << "\n**************************\n";
	cout << Person1.ID << endl;
	system("pause>0");
	return 0;
}