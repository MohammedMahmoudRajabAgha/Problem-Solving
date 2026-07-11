#include <iostream>

using namespace std;

class clsA
{
private:

    int var1;

    int Fun1()
    {
        return 1;
    }

protected:

    int var2;

    int Fun2()
    {
        return 2;
    }

public:

    int var3;

    int Fun3()
    {
        return 3;
    }
};

class clsB : protected clsA
{

public:

    int Fun4()
    {
        
        clsA::Fun2();

        return 4;
    }
};

class clsC : public clsB
{

public:

    int Fun5()
    {

        clsB::Fun2();

        return 5;
    }

};

int main()
{

    clsB B1;


    clsC C1;

    

    system("pause>0");
    return 0;
}

