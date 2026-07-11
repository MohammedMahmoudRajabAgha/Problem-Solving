#include <iostream>
#include<fstream>
#include<string>
#include"clsEmployee.h";

using namespace std;

int main()
{
	clsEmployee Employee1;

	Employee1.SetFirstName("Mohammad");
	Employee1.SetLastName("Agha");
	Employee1.SetAge(19);
	Employee1.SetSalary(4000);

	cout << "\n******************************\n";
	cout << "\tEmployee Info Card...";
	cout << "\n******************************";

	cout << "\nFirst Name : " << Employee1.FirstName();
	cout << "\nLast Name  : " << Employee1.LastName();
	cout << "\nFull Name  : " << Employee1.FullName();
	cout << "\nAge        : " << Employee1.Age();
	cout << "\nSalary     : " << Employee1.Salary();

	system("pause>0");
	return 0;
}
