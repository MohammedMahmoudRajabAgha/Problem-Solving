#include <iostream>

using namespace std;

class clsEmployee
{
	int _ID;
	string _FirstName;
	string _LastName;
	string _Title;
	string _Email;
	string _Phone;
	float _Salary;
	string _Department;

public:

	clsEmployee(int ID, string FirstName, string LastName, string Title, string Email, string Phone, float Salary, string Department)
	{
		_ID = ID;
		_FirstName = FirstName;
		_LastName = LastName;
		_Title = Title;
		_Email = Email;
		_Phone = Phone;
		_Salary = Salary;
		_Department = Department;
	}

	//Read Only...
	int ID()
	{
		return _ID;
	}

	void SetFirstName(string FirstName)
	{
		_FirstName = FirstName;
	}

	string FirstName()
	{
		return _FirstName;
	}

	void SetLastName(string LastName)
	{
		_LastName = LastName;
	}

	string LastName()
	{
		return _LastName;
	}

	string FullName()
	{
		return FirstName() + " " + LastName();
	}

	void SetTitle(string Title)
	{
		_Title = Title;
	}

	string Title()
	{
		return _Title;
	}

	void SetEmail(string Email)
	{
		_Email = Email;
	}

	string Email()
	{
		return _Email;
	}

	void SetPhone(string Phone)
	{
		_Phone = Phone;
	}

	string Phone()
	{
		return _Phone;
	}

	void SetSalary(float Salary)
	{
		_Salary = Salary;
	}

	float Salary()
	{
		return _Salary;
	}

	void SetDepartment(string Department)
	{
		_Department = Department;
	}

	string Department()
	{
		return _Department;
	}

	void SendEmail(string Subject, string Body)
	{
		cout << "\n*The following message sent successfully to : " << _Email;
		cout << "\n  Subject : " << Subject;
		cout << "\n  Body    : " << Body << endl;
	}

	void SendSMS(string TextMessage)
	{
		cout << "\n*The following SMS sent successfully to : " << _Phone;
		cout << "\n  " << TextMessage << endl;
	}

	void Print()
	{
		cout << "\nInfo : ";
		cout << "\n_____________________";
		cout << "\nID         : " << _ID;
		cout << "\nFirst Name : " << _FirstName;
		cout << "\nLast Name  : " << _LastName;
		cout << "\nFull Name  : " << FullName();
		cout << "\ntital      : " << _Title;
		cout << "\nEmail      : " << _Email;
		cout << "\nPhone      : " << _Phone;
		cout << "\nSalary     : " << _Salary;
		cout << "\nDepartment : " << _Department;
		cout << "\n_____________________\n";
	}

};

int main()
{
	clsEmployee Employee1(1, "Mohammed", "Rajab Agha", "junior", "Mo@gmail.com", "0988212317", 1000, "Programming");

	cout << Employee1.FirstName() << endl;

	Employee1.SetFirstName("jojo");

	cout << Employee1.FirstName() << endl;

	cout << "\n************************\n";

	cout << Employee1.LastName() << endl;

	Employee1.SetLastName("Abbas");

	cout << Employee1.LastName() << endl;

	cout << "\n************************\n";

	cout << Employee1.Title() << endl;

	Employee1.SetTitle("Software Engineering");

	cout << Employee1.Title() << endl;

	cout << "\n************************\n";


	cout << Employee1.Email() << endl;

	Employee1.SetEmail("Sh@gmail.com");

	cout << Employee1.Email() << endl;

	cout << "\n************************\n";

	cout << Employee1.Phone() << endl;

	Employee1.SetPhone("0999502085");

	cout << Employee1.Phone() << endl;

	cout << "\n************************\n";

	cout << Employee1.Salary() << endl;

	Employee1.SetSalary(2007);

	cout << Employee1.Salary() << endl;

	cout << "\n************************\n";

	cout << Employee1.Department() << endl;

	Employee1.SetDepartment("it");

	cout << Employee1.Department() << endl;

	cout << "\n************************\n";

	cout << Employee1.FullName() << endl;

	cout << "\n************************\n";

	Employee1.Print();

	cout << "\n************************\n";

	Employee1.SendEmail("The Final Project in CG", "This is the project i use C++ Programming laguage and OpenGL Library");
	Employee1.SendSMS("Hi, I'am next to Damascus Hospital");





	system("pause>0");
	return 0;
}
