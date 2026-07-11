#include <iostream>
#include"clsA.h";
using namespace std;

void Fun1()
{
    clsA A1, A2, A3;

    A1.var = 10;
    A2.var = 20;
    A3.var = 30;

    A1.Print();
    A2.Print();
    A3.Print();
}

void Fun2()
{
  
   clsA A1;

   A1.var = 10;
   A1.Print();

   clsA A2;

   A2.var = 20;
   A2.Print();

   clsA A3;
   A3.var = 30;
   A3.Print();
    
}


int main()
{
    cout << "\n******************************\n";
    cout << "Fun 1 : \n";
    Fun1();

    cout << "\n******************************\n";
    cout << "In the main : \n";
    clsA B;

    B.var = 1000;

    B.Print();

    cout << "\n******************************\n";

    B.Counter = 2000;
    cout << "new value of Counter : " << B.Counter << endl;
    cout << "\n******************************\n";
    cout << "Fun 1 : \n";
    Fun1();

    cout << "\n******************************\n";
    cout << "Fun 2 : \n";
    Fun2();
    system("pause>0");
    return 0;
}
