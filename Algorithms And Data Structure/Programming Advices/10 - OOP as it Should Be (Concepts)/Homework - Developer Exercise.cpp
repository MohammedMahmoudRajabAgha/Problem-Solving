#include <iostream>

using namespace std;

class clsPerson
{
private:
    int _ID;
    string _FirstName;
    string _LastName;
    string _Email;
    string _Phone;

public:

    clsPerson(int ID, string FirstName, string LastName, string Email, string Phone)
    {
        _ID = ID;
        _FirstName = FirstName;
        _LastName = LastName;
        _Email = Email;
        _Phone = Phone;
    }

    //read only
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
        // return  _FirstName + " " + _LastName;

        return FirstName() + " " + LastName();
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

    void Print()
    {
        cout << "\n Info : ";
        cout << "\n_____________________";
        cout << "\nID         : " << ID();
        cout << "\nFirst Name : " << FirstName();
        cout << "\nLast Name  : " << LastName();
        cout << "\nFull Name  : " << FullName();
        cout << "\nEmail      : " << Email();
        cout << "\nPhone      : " << Phone();
        

    }

    void SendEmail(string Subject, string Body)
    {
        cout << "\nThe following message sent sucessfully to email : " << _Email;
        cout << "\nSubject : " << Subject;
        cout << "\nBody : " << Body << "\n";
    }

    void SendSMS(string TextMessage)
    {
        cout << "\nThe following SMS sent sucessfully to Phone : " << _Phone;
        cout << "\n" << TextMessage << "\n";
    }

};

class clsEmployee : public clsPerson
{

    string _Title;
    string _Departement;
    float _Salary;

public:

    clsEmployee(int ID, string FirstName, string LastName, string Email, string Phone, string Title, string Departement, float Salary)
        :clsPerson(ID, FirstName, LastName, Email, Phone)
    {
        _Title = Title;
        _Departement = Departement;
        _Salary = Salary;
    }

    void SetTitle(string Title)
    {
        _Title = Title;
    }

    string Title()
    {
        return _Title;
    }

    void SetDepartement(string Departement)
    {
        _Departement = Departement;
    }

    string Departement()
    {
        return _Departement;
    }

    void SetSalary(float Salary)
    {
        _Salary = Salary;
    }

    float Salary()
    {
        return _Salary;
    }

    void Print()
    {
        clsPerson::Print();
        cout << "\nTitle       : " << Title();// ==  clsEmployee::Title();
        cout << "\nDepartement : " << Departement();
        cout << "\nSalary      : " << Salary();
      
    }


};

class clsDeveloper:public clsEmployee
{
    string _MainProgrammingLanguage;

public:

    clsDeveloper(int ID, string FirstName, string LastName, string Email, string Phone, string Title, string Departement,
        float Salary, string MainProgrammingLanguage)
        : clsEmployee(ID, FirstName, LastName, Email, Phone, Title, Departement, Salary)
    {
        _MainProgrammingLanguage = MainProgrammingLanguage;
    }

    void SetMainProgrammingLanguage(string MainProgrammingLanguage)
    {
        _MainProgrammingLanguage = MainProgrammingLanguage;
    }

    string MainProgrammingLanguage()
    {
        return _MainProgrammingLanguage;
    }

    void Print()
    {
        clsEmployee::Print();
        cout << "\n Main Programming Language : " << MainProgrammingLanguage();

    }
};

class clsDoctor :public clsEmployee
{
    string _Specialization;
   

public:
    clsDoctor(int ID, string FirstName, string LastName, string Email, string Phone, string Title, string Departement, 
        float Salary, string Specialization)
        :clsEmployee(ID, FirstName, LastName, Email, Phone, Title, Departement, Salary)
    {
        _Specialization = Specialization;
    }

    void SetSpecilization(string Specilization)
    {
        _Specialization = Specilization;
    }
    string GetSpecilization()
    {
        return _Specialization;
    }
    __declspec(property(get = GetSpecilization, put = SetSpecilization)) string Specialization;

    void Print()
    {
        clsEmployee::Print();
        cout << "\nSpecilization  : " << GetSpecilization();
    }

};

class clsSurgeon :public clsDoctor
{
    string _OperationType;

public:

    clsSurgeon(int ID, string FirstName, string LastName, string Email, string Phone, string Title, string Departement,
        float Salary, string Specialization, string OperationType)
        :clsDoctor(ID, FirstName, LastName, Email, Phone, Title, Departement, Salary, Specialization)
    {
        _OperationType = OperationType;
    }

    void SetOperationType(string OperationType)
    {
        _OperationType = OperationType;
    }

    string GetOperationType()
    {
        return  _OperationType;
    }
    __declspec(property(get = GetOperationType, put = SetOperationType)) string OperationType;

    void Print()
    {
        clsDoctor::Print();
        cout << "\nOp Type        : " << GetOperationType();

    }


};

int main()
{

    clsDeveloper D1(743, "Mohammed", "Rajab Agha", "mohammad970@gmail.com", "0988212317", "CEO", "Programming", 10000, "C++ & C#");
    
    D1.Print();
   
    D1.clsEmployee::Print();
   
    D1.clsPerson::Print();


    D1.SendSMS("Hi mr Developer :-)");

    clsSurgeon S1(444, "Shahed", "Agha", "Sh@gamil.com", "0999502085", "Prof", "Sergery", 1000, "Heart", "Heart Operation");
    S1.Print();


    

    system("pause>0");
    return 0;
}



//Prpgramming Advices code...

//
//#include <iostream>
//
//using namespace std;
//
//class clsPerson
//{
//
//private:
//    int _ID;
//    string _FirstName;
//    string _LastName;
//    string _Email;
//    string _Phone;
//
//public:
//
//    clsPerson(int ID, string FirstName, string LastName, string Email, string Phone)
//    {
//        _ID = ID;
//        _FirstName = FirstName;
//        _LastName = LastName;
//        _Email = Email;
//        _Phone = Phone;
//    }
//
//    //Read Only Property
//    int ID()
//    {
//        return _ID;
//    }
//
//    //Property Set
//    void setFirstName(string FirstName)
//    {
//        _FirstName = FirstName;
//    }
//
//    //Property Get
//    string FirstName()
//    {
//        return _FirstName;
//    }
//
//    //Property Set
//    void setLastName(string LastName)
//    {
//        _LastName = LastName;
//    }
//
//    //Property Get
//    string LastName()
//    {
//        return _LastName;
//    }
//
//    //Property Set
//    void setEmail(string Email)
//    {
//        _Email = Email;
//    }
//
//    //Property Get
//    string Email()
//    {
//        return _Email;
//    }
//
//    //Property Set
//    void setPhone(string Phone)
//    {
//        _Phone = Phone;
//    }
//
//    //Property Get
//    string Phone()
//    {
//        return _Phone;
//    }
//
//    string FullName()
//    {
//        return _FirstName + " " + _LastName;
//    }
//
//    void Print()
//    {
//        cout << "\nInfo:";
//        cout << "\n___________________";
//        cout << "\nID       : " << _ID;
//        cout << "\nFirstName: " << _FirstName;
//        cout << "\nLastName : " << _LastName;
//        cout << "\nFull Name: " << FullName();
//        cout << "\nEmail    : " << _Email;
//        cout << "\nPhone    : " << _Phone;
//        cout << "\n___________________\n";
//
//    }
//
//    void SendEmail(string Subject, string Body)
//    {
//
//        cout << "\nThe following message sent successfully to email: " << _Email;
//        cout << "\nSubject: " << Subject;
//        cout << "\nBody: " << Body << endl;
//
//    }
//
//    void SendSMS(string TextMessage)
//    {
//        cout << "\nThe following SMS sent successfully to phone: " << _Phone;
//        cout << "\n" << TextMessage << endl;
//    }
//
//
//};
//
//class clsEmployee : public clsPerson
//{
//
//private:
//    string _Title;
//    string _Department;
//    float _Salary;
//
//public:
//
//    clsEmployee(int ID, string FirstName, string LastName, string Email, string Phone, string Title, string Department, float Salary)
//        : clsPerson(ID, FirstName, LastName, Email, Phone)
//
//    {
//
//        _Title = Title;
//        _Department = Department;
//        _Salary = Salary;
//
//    }
//
//    //Property Set
//    void setTitle(string Title)
//    {
//        _Title = Title;
//    }
//
//    //Property Get
//    string Title()
//    {
//        return _Title;
//    }
//
//    //Property Set
//    void setDepartment(string Department)
//    {
//        _Department = Department;
//    }
//
//    //Property Get
//    string Department()
//    {
//        return _Department;
//    }
//
//    //Property Set
//    void setSalary(float Salary)
//    {
//        _Salary = Salary;
//    }
//
//    //Property Get
//    float Salary()
//    {
//        return _Salary;
//    }
//
//    void Print()
//    {
//
//        cout << "\nInfo:";
//        cout << "\n___________________";
//        cout << "\nID        : " << ID();
//        cout << "\nFirstName : " << FirstName();
//        cout << "\nLastName  : " << LastName();
//        cout << "\nFull Name : " << FullName();
//        cout << "\nEmail     : " << Email();
//        cout << "\nPhone     : " << Phone();
//
//        cout << "\nTitle     : " << _Title;
//        cout << "\nDepartment: " << _Department;
//        cout << "\nSalary    : " << _Salary;
//
//        cout << "\n___________________\n";
//
//    }
//
//};
//
//class clsDeveloper : public clsEmployee
//
//{
//
//private:
//    string _MainProgrammingLanguage;
//
//public:
//
//    clsDeveloper(int ID, string FirstName, string LastName, string Email, string Phone, string Title,
//        string Department, float Salary, string MainProgrammingLanguage)
//        : clsEmployee(ID, FirstName, LastName, Email, Phone, Title, Department, Salary)
//
//    {
//        _MainProgrammingLanguage = MainProgrammingLanguage;
//    }
//
//    //Property Set
//    void setMainProgrammingLanguage(string MainProgrammingLanguage)
//    {
//        _MainProgrammingLanguage = MainProgrammingLanguage;
//    }
//
//    //Property Get
//    string MainProgrammingLanguage()
//    {
//        return _MainProgrammingLanguage;
//    }
//
//    void Print()
//    {
//
//        cout << "\nInfo:";
//        cout << "\n___________________";
//        cout << "\nID        : " << ID();
//        cout << "\nFirstName : " << FirstName();
//        cout << "\nLastName  : " << LastName();
//        cout << "\nFull Name : " << FullName();
//        cout << "\nEmail     : " << Email();
//        cout << "\nPhone     : " << Phone();
//
//        cout << "\nTitle     : " << Title();
//        cout << "\nDepartment: " << Department();
//        cout << "\nSalary    : " << Salary();
//        cout << "\nPLanguage : " << MainProgrammingLanguage();
//        cout << "\n___________________\n";
//
//    }
//
//};
//
//int main()
//
//{
//
//    clsDeveloper Developer1(10, "Mohammed", "Abu-Hadhoud", "A@a.com", "8298982", "Web Developer",
//        "ProgrammingAdvices", 5000, "C++");
//
//    Developer1.Print();
//
//    Developer1.SendSMS("Hi mr Developer :-)");
//
//
//    system("pause>0");
//    return 0;
//}