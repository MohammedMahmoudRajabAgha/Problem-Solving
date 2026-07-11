#include <iostream>

using namespace std;

// Abstract Class / Interface / Contract.
class clsMobile
{
private:
    virtual void TakePicture() = 0;

public:
    virtual void Dial(string PhoneNumber) = 0;
    virtual void SendSMS(string PhoneNumber, string Text) = 0;
};

//This class signed a contract with clsMobile abstract class 
// therefore it should implement everything in the abstract class.
class clsiPhone :public clsMobile
{


    void Dial(string PhoneNumber)
    {


    }

public:

    void SendSMS(string PhNumber, string Text)
    {
        cout << "\nThis SMS send to Phone Number : " << PhNumber << endl;
        cout << Text;
    }

    void TakePicture()
    {
        cout << "\a";
        cout << "Picture is Taked.\n";
    }
};

class clsSamsungNote10:public clsMobile
{
public:

    void Dial(string PhoneNumber)
    {
        cout << "\n" << PhoneNumber << endl;
        cout << "Runing\n";
    }

    void SendSMS(string PhoneNumber, string Text)
    {
        cout << "\nThis SMS send to Phone Number : " << PhoneNumber << endl;
        cout << Text;
    }

    void TakePicture()
    {
        cout << "\a";
        cout << "Picture is Taked.\n";
    }

};

int main()
{
    clsiPhone i1;

    i1.SendSMS("0999502085", "Hi, My name is Mo Agha");

    i1.SendSMS("***","KOKO");

    clsSamsungNote10 N1;

    N1.Dial("099**");

    system("pause>0");
    return 0;
}
