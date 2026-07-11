#include <iostream>

using namespace std;

class clsA
{
private:
    int _Var1;

    void KOKO()
    {
        cout << "\n\n\nkoko IN PRIVATE Access Sprcifier.\n";
    }
    
 

protected:

    int Var2;

public:
    int Var3;

    clsA()
    {
        _Var1 = 10;
        Var2 = 20;
        Var3 = 30;

    }

    //Friend Class
    friend class clsB;


};

class clsB
{
public:
    
    void display(clsA A1)
    {
        A1.KOKO();
        
        cout << "\nThe Value of Var1 = " << A1._Var1;
        cout << "\nThe Value of Var2 = " << A1.Var2;
        cout << "\nThe Value of Var3 = " << A1.Var3;

        //Error...
        //clsA::KOKO();
    }



};

int main()
{
    clsA A1;

    clsB B1;

    B1.display(A1);

}


//Extera Example...

//
//#include <iostream>
//
//using namespace std;
//
//class clsBankAccount
//{
//private:
//    string _AccountNumber;
//    double _Balance;
//    string _PINCode;
//
//public:
//    clsBankAccount(string AccountNumber, double Balance, string PINCode)
//    {
//        _AccountNumber = AccountNumber;
//        _Balance = Balance;
//        _PINCode = PINCode;
//    }
//
//    void Print()
//    {
//        cout << _AccountNumber << endl;
//        cout << _Balance << endl;
//        cout << _PINCode << endl;
//    }
//
//    friend class clsDataExporter;
//};
//
//class clsDataExporter
//{
//public:
//
//    void Export(clsBankAccount Account)
//    {
//        cout << Account._AccountNumber << endl;
//        cout << Account._Balance << endl;
//        cout << Account._PINCode << endl;
//    }
//
//    void Change(clsBankAccount& Account)
//    {
//        Account._AccountNumber = "0000";
//        Account._Balance = 0;
//        Account._PINCode = "0000";
//    }
//
//};
//
//int main()
//{
//    clsBankAccount Account("Acc-1011", 500.25, "2007");
//
//    clsDataExporter Data1;
//
//    Data1.Export(Account);
//
//    Data1.Change(Account);
//
//    Data1.Export(Account);
//
//    Account.Print();
//
//}
