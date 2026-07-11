#include <iostream>
#include"clsString.h"
#include"clsDate.h";
#include"clsPeriod.h"

using namespace std;


int main()

{
    clsDate Date1;
    Date1.Print();

    clsDate Date2("31/1/2022");
    Date2.Print();

    clsDate Date3(20, 12, 2022);
    Date3.Print();

    clsDate Date4(250, 2022);
    Date4.Print();

    Date1.IncreaseDateByOneMonth();
    Date1.Print();

    //Date3.PrintYearCalendar();
    //cout << Date2.IsValid() << endl;

    /*cout << "My Age InDays:" <<
        clsDate::CalculateMyAgeInDays(  clsDate(6, 11, 1977) );*/
        //You can try any method at your own..


    cout << "\n\n*************************************\n\n";
    cout << "Period \n";

    clsPeriod Period1(clsDate(1, 1, 2022), clsDate(10, 1, 2022));
    Period1.Print();

    cout << "\n";

    clsPeriod Period2(clsDate(3, 1, 2022), clsDate(5, 1, 2022));
    Period2.Print();


    //You can check like this
    cout << Period1.IsOverLapPeriods(Period2) << endl;


    //Also you can call the static method and send period 1 and period 2
    cout << clsPeriod::IsOverLapPeriods(Period1, Period2) << endl;


    system("pause>0");
    return 0;
};

