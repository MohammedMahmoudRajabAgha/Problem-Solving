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

    clsPerson(short ID, string FirstName, string LastName, string Email, string Phone)
    {
        _ID = ID;
        _FirstName = FirstName;
        _LastName = LastName;
        _Email = Email;
        _Phone = Phone;
    }

    //read only
    short ID()
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
        cout << "\nInfo : ";
        cout << "\n_____________________";
        cout << "\nID         : " << _ID;
        cout << "\nFirst Name : " << _FirstName;
        cout << "\nLast Name  : " << _LastName;
        cout << "\nFull Name  : " << FullName();
        cout << "\nEmail      : " << _Email;
        cout << "\nPhone      : " << _Phone;
        cout << "\n_____________________\n";

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

int main()
{
    clsPerson Person1(10, "Mohammed", "Rajab Agha", "MO@gmail.com", "0988212317"), 
        Person2(99, "Ahmed", "Rajab Agha", "A@gmail.com", "0999502085");

    
    Person1.Print();

    Person1.SetFirstName("Maram");

    Person1.Print();

    Person1.SendEmail("Hi", "How are you ? ");
   

    Person2.Print();
    
    Person2.SendSMS("How are you ? ");

    system("pause>0");
    return 0;
}
