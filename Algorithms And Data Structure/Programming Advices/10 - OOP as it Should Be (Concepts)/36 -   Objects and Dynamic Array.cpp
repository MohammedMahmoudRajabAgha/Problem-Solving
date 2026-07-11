#include<iostream>
#include<vector>

using namespace std;

class clsA
{
public:

	// dummy constructor
	clsA() {}

	//Parametarized Constructor
	clsA(int value)
	{
		x = value;
	}

	int x;

	void Print()
	{
		cout << "The value of x=" << x << endl;
	}

};


int main()

{
	short NumberOfObjects = 5;

	// allocating dynamic array
   // of Size NumberOfObjects using new keyword


	//initial List
	//clsA* arr = new clsA[3]{ clsA(10),clsA(20),clsA(30) };

	clsA* arrA = new clsA[NumberOfObjects];



	// calling constructor
	// for each index of array
	for (int i = 0; i < NumberOfObjects; i++) {
		arrA[i] = clsA(i);
	}

	// printing contents of array
	for (short i = 0; i < NumberOfObjects; i++)
	{
		(arrA + 1)->Print();
	}


	delete[] arrA;


	system("pause>0");
	return 0;

}



//Extera Example...


//#include <iostream>
//#include<vector>
//using namespace std;
//class clsPerson
//{
//private:
//	string _FirstName;
//	string _LastName;
//	short _Age;
//	string _City;
//	string _Country;
//
//protected:
//	string _ID;
//
//public:
//	clsPerson() {}
//
//	clsPerson(string ID, string FirstName, string LastName, short Age, string City, string Country)
//	{
//		this->_ID = ID;
//		this->_FirstName = FirstName;
//		this->_LastName = LastName;
//		this->_Age = Age;
//		this->_City = City;
//		this->_Country = Country;
//	}
//
//	string GetID()
//	{
//		return this->_ID;
//	}
//	__declspec(property(get = GetID)) string ID;
//
//	void SetFirstName(string FirstName)
//	{
//		this->_FirstName = FirstName;
//	}
//	string GetFirstNAme()
//	{
//		return  this->_FirstName;
//	}
//	__declspec(property(get = GetFirstNAme, put = SetFirstName)) string FirstName;
//
//	void SetLastName(string LastName)
//	{
//		this->_LastName = LastName;
//	}
//	string GetLastName()
//	{
//		return this->_LastName;
//	}
//	__declspec(property(get = GetLastName, put = SetLastName)) string LastName;
//
//	string GetFullName()
//	{
//		return FirstName + " " + LastName;
//	}
//	__declspec(property(get = GetFullName)) string FullName;
//
//	void SetCity(string City)
//	{
//		this->_City = City;
//	}
//	string GetCity()
//	{
//		return this->_City;
//	}
//	__declspec(property(get = GetCity, put = SetCity)) string City;
//
//	void SetCountry(string Country)
//	{
//		this->_Country = Country;
//	}
//	string GetCountry()
//	{
//		return this->_Country;
//	}
//	__declspec(property(get = GetCountry, put = SetCountry)) string Country;
//
//	void SetAge(short Age)
//	{
//		this->_Age = Age;
//	}
//	short GetAge()
//	{
//		return this->_Age;
//	}
//	__declspec(property(get = GetAge, put = SetAge)) short Age;
//
//
//	virtual void Print()
//	{
//		cout << "\nPerson Info.";
//		cout << "\n_______________________";
//		cout << "\nFirst Name : " << FirstName;
//		cout << "\nLast Name  : " << LastName;
//		cout << "\nFull Name  : " << FullName;
//		cout << "\nAge        : " << Age;
//		cout << "\nCity       : " << City;
//		cout << "\nCountry    : " << Country;
//		cout << "\n_______________________";
//
//	}
//
//
//};
//
//class clsEmployee :public clsPerson
//{
//private:
//
//	float _Salary;
//	string _Dept;
//
//public:
//	clsEmployee() {}
//
//	clsEmployee(string ID, string FirstName, string LastName, short Age, string City, string Country, float Salary, string Dept)
//		:clsPerson(ID, FirstName, LastName, Age, City, Country)
//	{
//		clsEmployee::_ID = "202410" + clsEmployee::_ID;
//		this->_Salary = Salary;
//		this->_Dept = Dept;
//	}
//
//	void SetSalary(float Salary)
//	{
//		this->_Salary = Salary;
//	}
//	float GetSalary()
//	{
//		return this->_Salary;
//	}
//	__declspec(property(get = GetSalary, put = SetSalary)) float Salary;
//
//	void SetDept(string Dept)
//	{
//		this->_Dept = Dept;
//	}
//	string GetDept()
//	{
//		return this->_Dept;
//	}
//	__declspec(property(get = GetDept, put = SetDept))  string Dept;
//
//	void Print()
//	{
//		cout << "\nEmployee Info.";
//		cout << "\n_______________________";
//		cout << "\nFirst Name : " << FirstName;
//		cout << "\nLast Name  : " << LastName;
//		cout << "\nFull Name  : " << FullName;
//		cout << "\nAge        : " << Age;
//		cout << "\nSalary     : " << Salary;
//		cout << "\nDept       : " << Dept;
//		cout << "\nCity       : " << City;
//		cout << "\nCountry    : " << Country;
//		cout << "\n_______________________";
//
//
//	}
//
//
//};
//
//int main()
//{
//
//
//	clsPerson* PersonArray = new clsPerson[2];
//
//	PersonArray[0] = clsPerson("000", "X", "Y", 0, "Dear Al Zoor", "Syria");
//	PersonArray[1] = clsPerson("111", "Z", "M", 1250, "Damascus", "Syria");
//
//	PersonArray[1].Print();
//
//	PersonArray[0].Print();
//
//	cout << "\n\n***************************************\n\n";
//
//
//
//	clsEmployee* EmployeeArray = new clsEmployee[2];
//
//
//	EmployeeArray[0] = clsEmployee("743", "MO", "Agha", 19, "Damascus", "Syria", 1490.50, "Programming");
//	EmployeeArray[1] = clsEmployee("512", "Maya", "Agha", 19, "Darra", "Syria", 1050.13, "Testing");
//
//	EmployeeArray[0].Print();
//	EmployeeArray[1].Print();
//
//	system("pause>0");
//	return 0;
//}
//
