#include <iostream>
#include<vector>
#include"clsPerson.h";
using namespace std;


int main()
{
	clsPerson Person1, Person2;
	
	Person1.FirstName = "Mohammed";
	Person1.LastName = "Agha";

	Person2.FirstName = "Ali";
	Person2.LastName = "Maher";


	cout << "Person 1 : " << Person1.FullName() << endl;
	cout << "Person 2 : " << Person2.FullName() << endl;

	


	return 0;
}

