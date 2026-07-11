#include<iostream>

using namespace std;

class clsEmployee
{
public:
	string ID;
	string Name;
	short Age;

	clsEmployee(string ID,string Name, short Age)
	{
		this->ID = ID;
		this->Name = Name;
		this->Age = Age;
	}

	static void Func1(clsEmployee Employee)
	{
		Employee.Print();
	}

	void Fun2()
	{
		Func1(*this);
	}


	void Print()
	{
		cout << ID << " " << Name << " " << Age << endl;
		//cout << this->ID << " " << this->Name << " " << this->Age << endl;

	}

};


int main()
{
	clsEmployee E("1", "Mo Agha", 19);

	E.Print();


	E.Fun2();
}