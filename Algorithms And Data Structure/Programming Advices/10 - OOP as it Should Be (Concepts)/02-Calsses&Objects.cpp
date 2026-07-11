#include<iostream>
#include"clsPerson.h";

using namespace std;

int main()
{

	clsPerson Person1;
	

	Person1.FirstName = "MO";
	Person1.LastName = "Agha";

	cout << Person1.FullName() << endl;

}