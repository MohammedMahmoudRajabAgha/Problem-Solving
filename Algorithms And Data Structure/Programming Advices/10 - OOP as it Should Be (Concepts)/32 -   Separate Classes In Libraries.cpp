#include <iostream>
#include"clsPerson.h"
#include"clsEmployee.h"
#include"clsStudent.h"
#include"clsInstructor.h"
using namespace std;

int main()
{

    clsPerson P1(1, "Ahmed", "Agha", "A@gmail.com", "09450308290");

    P1.Print();


    clsEmployee E1(400, "Mahmoud", "Agha", "Mahmoud@gmail.com", "0999502085", "CEO", "Programming", 5000);
    E1.Print();

    E1.clsPerson::Print();
    

    system("pause>0");
    return 0;
}
