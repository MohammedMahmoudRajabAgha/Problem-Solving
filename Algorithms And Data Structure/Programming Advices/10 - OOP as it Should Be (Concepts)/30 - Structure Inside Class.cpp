#include<iostream>
using namespace std;

class clsPerson
{
private:


public:
    string FullName;

    struct stAddress
    {
        string AddressLine1;
        string AddresLine2;
        string City;
        string Country;
    };

    stAddress Address;
    clsPerson()
    {
        FullName = "Mohammed Agha";
        Address.AddressLine1 = "Ashrfia Sahnaia";
        Address.AddresLine2 = "behined Albayan";
        Address.City = "Damascus";
        Address.Country = "Syria";
    }

    void Print()
    {
        cout << "\nAddress.";
        cout << "\nFull Name : " << FullName;
        cout << "\nAddress Line1 : " << Address.AddressLine1;
        cout << "\nAddress Line2 : " << Address.AddresLine2;
        cout << "\nCity : " << Address.City;
        cout << "\nCountry : " << Address.Country;
        cout << endl;
    }

};

int main()
{
    clsPerson P1;

    P1.Print();


    clsPerson::stAddress Add1;

    Add1.City = "KOKO";

    cout << Add1.City << endl;

    system("pause>0");
    return 0;
}