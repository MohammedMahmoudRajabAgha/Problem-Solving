#include <iostream>
#include"clsPerson.h";
using namespace std;

void Fun1()
{
	clsPerson Person1;
}

void Fun2()
{
	clsPerson* Person2 = new clsPerson;

	delete Person2;
}

int main()
{
	Fun1();

	Fun2();

	system("pause>0");
	return 0;
}
