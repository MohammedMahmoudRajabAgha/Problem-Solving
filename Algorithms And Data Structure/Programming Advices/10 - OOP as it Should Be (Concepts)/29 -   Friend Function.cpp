#include<iostream>
using namespace std;

class clsA
{
private:
    int _Var1;

protected:
    int _Var3;

public:
    int Var2;

    clsA()
    {
        _Var1 = 10;
        Var2 = 20;
        _Var3 = 30;

    }

    friend int MySum(clsA A1);    //friend function 

};

//this function is normal function and not a member of any class
int MySum(clsA A1)
{
    return A1._Var1 + A1.Var2 + A1._Var3;
}

//Error

//int Fun2(clsA A1)
//{
//    return A1._Var1 + A1.Var2 + A1._Var3;
//}

int main()
{
    clsA A1;

    cout << MySum(A1);

    system("pause>0");

    return 0;
};



//Friend Function inside Class



//#include<iostream>
//using namespace std;
//
//class clsA;
//
//class clsB
//{
//public:
//
//    int MySum(clsA A);
//};
//
//class clsA
//{
//private:
//    int _Var1;
//
//protected:
//    int _Var3;
//
//public:
//    int Var2;
//
//    clsA()
//    {
//        _Var1 = 10;
//        Var2 = 20;
//        _Var3 = 30;
//
//    }
//
//    friend int clsB::MySum(clsA A);
//};
//
//int clsB::MySum(clsA A)
//{
//    return A.Var2 + A._Var1 + A._Var3;
//}
//
//
//int main()
//{
//   
//    clsA A;
//
//    clsB B;
//  cout<<  B.MySum(A);
//
//
//    system("pause>0");
//
//    return 0;
//};




//We declare friend function inside the body of a class, whose private and protective data needs to be accessed,
// starting with the keyword friend to access the data. We use them when we need to operate between two different classes at the same time.

//إذا كانت لدينا دالة تحتاج الوصول إلى بيانات الكلاسين، فإننا نجعلها 
// Friend 
// في كلا الكلاسين


//#include <iostream>
//using namespace std;
//
//class clsCourse;
//
//class clsStudent
//{
//private:
//    int Grade = 50;
//
//public:
//    friend void Register(clsStudent& S, clsCourse& C);
//
//    int GetGrade()
//    {
//        return  Grade;
//
//    }
//};
//
//class clsCourse
//{
//private:
//    int Capacity = 4;
//
//    friend void Register(clsStudent& S, clsCourse& C);
//
//public:
//
//    int GetCapacity()
//    {
//        return Capacity;
//    }
//
//};
//
//void Register(clsStudent& S, clsCourse& C)
//{
//    S.Grade += 50;
//    C.Capacity--;
//}
//
//int main()
//{
//    clsStudent S1;
//
//    clsCourse C1;
//
//    Register(S1, C1);
//
//    cout << S1.GetGrade() << endl;
//    cout << C1.GetCapacity();
//
//}