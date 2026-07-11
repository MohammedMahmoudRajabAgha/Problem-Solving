#include <iostream>

using namespace std;

class clsA
{
private:
    int _Var1;

    void _Func1()
    {
        cout << "\nFunc1 :-)";
    }

protected:
    int Var2;

    void Func2()
    {
        cout << "\nFunc2 :-)";
    }

public:
    int Var3;

    void Func3()
    {
        cout << "\nFinc3 :-)";
    }
};

class clsB :public clsA
{
public:

    void Fun4()
    {
        cout << "\nFunc4 from Inheritance class :-)";
        clsA::Func2();
        
    }


};

int main()
{
    clsA A;

    A.Func3(); 

    clsB B;

    B.Func3();
    B.Fun4();

}

