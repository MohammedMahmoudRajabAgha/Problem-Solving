#pragma once
#include<iostream>
#include "clsString.h"
#include"clsDate.h";
using namespace std;

class clsInputValidate
{
public:
    static bool IsNumberBetween(short Number, short From, short To)
    {
        return (Number >= From && Number <= To);
    }

    static bool IsNumberBetween(int Number, int From, int To)
    {
        return (Number >= From && Number <= To);
    }

    static bool IsNumberBetween(float Number, float From, float To)
    {
        return (Number >= From && Number <= To);
    }

    static bool IsNumberBetween(double Number, double From, double To)
    {
        return (Number >= From && Number <= To);
    }

    static bool IsDateBetween(clsDate Date, clsDate DateFrom, clsDate DateTo)
    {
        //Date>=From && Date<=To
        if ((clsDate::IsDate1AfterDate2(Date, DateFrom) || (clsDate::IsDate1EqualDate2(Date, DateFrom))) 
            
            &&
            ((clsDate::IsDate1BeforeDate2(Date, DateTo)) || (clsDate::IsDate1EqualDate2(Date, DateTo)))
           )
            return true;

        //Date>=To && Date<=From
        if ((clsDate::IsDate1AfterDate2(Date, DateTo) || (clsDate::IsDate1EqualDate2(Date, DateTo)))

            &&
            ((clsDate::IsDate1BeforeDate2(Date, DateFrom)) || (clsDate::IsDate1EqualDate2(Date, DateFrom)))
            )
            return true;

        return false;
    }

    static int ReadIntNumber(string ErrorMessage = "Invalid Number, Enter agine : \n")
    {
        int Number;

        cin >> Number;
        //while (!(cin >> Number))
        while (cin.fail())
        {
            // user didn't input a number   
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            cout << ErrorMessage;
            cin >> Number;

        }
        return Number;
    }

    static int ReadIntNumberBetween(int From, int To, string ErrorMessage = "Number is not Within range, Enter againe : \n")
    {
        int Number = 0;

        Number = ReadIntNumber();

        while (!IsNumberBetween(Number, From, To))
        {
            cout << ErrorMessage;

            Number = ReadIntNumber();
        }

        return Number;
    }

    static double ReadDblNumber(string ErrorMessage = "Invalid Number, Enter agine : \n")
    {
        double Number;

        cin >> Number;

        while (cin.fail())
        {
            // user didn't input a number   
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            cout << ErrorMessage;
            cin >> Number;

        }
        return Number;
    }

    static double ReadDblNumberBetween(double From, double To, string ErrorMessage = "Number is not Within range, Enter agine : \n")
    {
        double Number = 0;

        Number = ReadDblNumber();

        while (!IsNumberBetween(Number, From, To)) 
        {
            cout << ErrorMessage;

            Number = ReadDblNumber();
        }

        return Number;
    }

    static bool IsValidDate(clsDate Date)
    {
        return clsDate::IsValidDate(Date);
    }


    //Append...

};

