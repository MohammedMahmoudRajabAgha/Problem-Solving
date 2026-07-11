#pragma once

#pragma warning(disable : 4996)// For GetSystemDate

#include<iostream>
#include "ReadInputs.h"
#include "StringManipulation.h";

using namespace std;

namespace MyDateLibrary
{
    void PrintLocalTime()
    {
        //"Don't Forget This Code"
//#pragma warning(disable : 4996)

        //char* dt = ctime(&t);   // convert to string form  

        time_t T = time(0); // get time now

        tm* now = localtime(&T);

        cout << now->tm_year + 1900 << endl;
        cout << now->tm_mon + 1 << endl;
        cout << now->tm_hour << endl;
        cout << now->tm_wday << endl;
        cout << now->tm_isdst << endl;
        cout << now->tm_mday << endl;
        cout << now->tm_min << endl;
        cout << now->tm_sec << endl;
        cout << now->tm_yday << endl;

    }

    string GMT_Time()
    {
        //"Don't Forget This Code"
       //#pragma warning(disable : 4996)

        time_t t = time(0); // get time now

        // converting now to tm struct for UTC date/time
        tm* gmtm = gmtime(&t);

        char* dt = asctime(gmtm);//converting time struct to String


        return dt;

        //Note : Syria time is GMT+3
    }

    bool IsLeapYear(short Year)
    {
        return ((Year % 400 == 0) || ((Year % 4 == 0) && (Year % 100 != 0)));
    }

    short NumberOfDaysInAYear(short Year)
    {
        return IsLeapYear(Year) ? 366 : 365;
    }

    short  NumberOfHoursInAYear(short Year)
    {
        return NumberOfDaysInAYear(Year) * 24;
    }

    int  NumberOfMinutesInAYear(short Year)
    {
        return  NumberOfHoursInAYear(Year) * 60;
    }

    int  NumberOfSecondsInAYear(short Year)
    {
        return NumberOfMinutesInAYear(Year) * 60;
    }

    short NumberOfDaysInAMonth(short Month, short Year)
    {
        if (Month < 1 || Month>12)
            return 0;

        short NumberOfDays[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

        return (Month == 2) ? (IsLeapYear(Year) ? 29 : 28) : NumberOfDays[Month - 1];

    }

    short NumberOfHoursInAMonth(short Month, short Year)
    {
        return NumberOfDaysInAMonth(Year, Month) * 24;
    }

    int NumberOfMinutesInAMonth(short Month, short Year)
    {
        return NumberOfHoursInAMonth(Year, Month) * 60;
    }

    int NumberOfSecondsInAMonth(short Month, short Year)
    {
        return NumberOfMinutesInAMonth(Year, Month) * 60;
    }

    short DayOfWeekOrder(short Day, short Month, short Year)
    {
        short a, y, m, d;

        a = (14 - Month) / 12;

        y = Year - a;

        m = Month + (12 * a) - 2;

        //Gregorian
        //0:Sun, 1:Mon, 2:Tue...etc

        return (Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;
    }


    short DayOfWeekOrder(clsDate Date)
    {
        return DayOfWeekOrder(Date.Day, Date.Month, Date.Year);
    }

    string DayShortName(short DayOfWeekOrder)
    {
        string arrDayNames[7] = { "Sun","Mon","Tue","Wed","Thu","Fri","Sat" };

        return arrDayNames[DayOfWeekOrder];
    }

    string MonthShortName(short Month)
    {
        string arrMonthNames[12] = { "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec" };

        return arrMonthNames[Month - 1];
    }

    void PrintMonthCalendar(short Month, short Year)
    {
        int NumberOfDays;

        // Index of the day from 0 to 6
        int current = DayOfWeekOrder(1, Month, Year);

        NumberOfDays = NumberOfDaysInAMonth(Month, Year);

        // Print the current month name
        printf("\n _______________%s_______________\n\n",
            MonthShortName(Month).c_str());

        // Print the columns
        printf("  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");

        // Print appropriate spaces (4 spaces per day)
        int i;
        for (i = 0; i < current; i++)
            printf("     ");  // 5 مسافات (لكن المسافة الأولى من %5d)

        for (int j = 1; j <= NumberOfDays; j++)
        {
            printf("%5d", j);  // %5d = 4 مسافات + الرقم

            if (++i == 7)
            {
                i = 0;
                printf("\n");
            }
        }

        printf("\n _________________________________\n");
    }

    short NumberOfDaysFromTheBeginingOfTheYear(short Day, short Month, short Year)
    {
        short TotalDays = 0;

        for (short i = 1; i <= Month - 1; i++)
        {
            TotalDays += NumberOfDaysInAMonth(i, Year);
        }

        TotalDays += Day;

        return TotalDays;
    }




    short ReadYear()
    {
        short Year;

        cout << "Please enter a Year ? ";
        cin >> Year;

        return Year;
    }

    short ReadMonth()
    {
        short Month;

        cout << "Please entre a Month ? ";
        cin >> Month;

        return Month;
    }

    short ReadDay()
    {
        short Day;

        cout << "\nPlease entre a Day ? ";
        cin >> Day;

        return Day;
    }

    struct clsDate
    {
        short Year;
        short Month;
        short Day;
    };

    clsDate ReadFullDate()
    {
        clsDate Date;

        Date.Day = ReadDay();
        Date.Month = ReadMonth();
        Date.Year = ReadYear();

        return Date;
    }

    void PrintFullDate(clsDate Date)
    {
        cout << Date.Day << '/' << Date.Month << '/' << Date.Year;
    }

    //                using sDate = MyLibraries::MyDateLibrary::sDate;

    void SwapDates(clsDate& Date1, clsDate& Date2)
    {
        clsDate TempDate;

        TempDate.Day = Date1.Day;
        TempDate.Month = Date1.Month;
        TempDate.Year = Date1.Year;

        Date1.Day = Date2.Day;
        Date1.Month = Date2.Month;
        Date1.Year = Date2.Year;

        Date2.Day = TempDate.Day;
        Date2.Month = TempDate.Month;
        Date2.Year = TempDate.Year;
    }

    clsDate ReadFullDate()
    {
        clsDate Date;

        Date.Day = ReadInputs::ReadShortNumber("\nPlease entre a Day ? ");
        Date.Month = ReadInputs::ReadShortNumber("Please entre a Month ? ");
        Date.Year = ReadInputs::ReadShortNumber("Please entre a Year ? ");

        return Date;
    }

    clsDate GetDateFromDayOrderInYear(short DaysOrderInAYear, short Year)
    {
        short ReminingDays = DaysOrderInAYear;
        short MonthDays;

        clsDate Date;

        Date.Year = Year;
        Date.Month = 1;

        while (true)
        {
            MonthDays = NumberOfDaysInAMonth(Date.Month, Year);
            if (ReminingDays > MonthDays)
            {
                ReminingDays -= MonthDays;
                Date.Month++;
            }
            else
            {
                Date.Day = ReminingDays;
                break;
            }

        }

        return Date;
    }

    clsDate DateAddDays(short NumberOfDaysToAdd, clsDate Date)
    {

        short RemaningDays = NumberOfDaysToAdd + NumberOfDaysFromTheBeginingOfTheYear(Date.Day, Date.Month, Date.Year);
        short MonthDay = 0;

        Date.Month = 1;

        while (true)
        {
            MonthDay = NumberOfDaysInAMonth(Date.Month, Date.Year);

            if (RemaningDays > MonthDay)
            {
                RemaningDays -= MonthDay;

                Date.Month++;

                if (Date.Month > 12)
                {
                    Date.Month = 1;
                    Date.Year++;
                }
            }

            else
            {
                Date.Day = RemaningDays;
                break;
            }

        }

        return Date;

    }

    bool IsDate1BeforeDate2(clsDate Date1, clsDate Date2)
    {
        return (Date1.Year < Date2.Year) ? true :
            (
                (Date1.Year == Date2.Year) ?
                (
                    (Date1.Month < Date2.Month) ? true :
                    (
                        (Date1.Month == Date2.Month) ?
                        Date1.Day < Date2.Day :
                        false
                        )
                    ) :
                false
                );
    }

    bool IsDate1EqualDate2(clsDate Date1, clsDate Date2)
    {

        return (Date1.Year == Date2.Year) ?
            (
                (Date1.Month == Date2.Month) ? Date1.Day == Date2.Day : false
                )
            : false;
    }

    bool IsDate1AfterDate2(clsDate Date1, clsDate Date2)
    {
        return(!IsDate1BeforeDate2(Date1, Date2) && !IsDate1EqualDate2(Date1, Date2));
    }

    bool IsLastDayInMonth(clsDate Date)
    {
        return (Date.Day == NumberOfDaysInAMonth(Date.Month, Date.Year));
    }

    bool IsLastMonthInYear(short Month)
    {
        return (Month == 12);
    }

    clsDate IncreaseDateByOneDay(clsDate Date)
    {
        if (IsLastDayInMonth(Date))
        {
            if (IsLastMonthInYear(Date.Month))
            {
                Date.Day = 1;
                Date.Month = 1;
                Date.Year++;
            }

            else
            {
                Date.Day = 1;
                Date.Month++;
            }
        }

        else
        {
            Date.Day++;
        }

        return Date;
    }

    int GetDifferenceInDays(clsDate Date1, clsDate Date2, bool IncludingEndDay = false)
    {
        int DiffDays = 0;
        short SwapFlagValue = 1;

        if (!IsDate1BeforeDate2(Date1, Date2))
        {
            SwapDates(Date1, Date2);
            SwapFlagValue = -1;
        }

        while (IsDate1BeforeDate2(Date1, Date2))
        {
            DiffDays++;
            Date1 = IncreaseDateByOneDay(Date1);
        }

        return IncludingEndDay ? ++DiffDays * SwapFlagValue : DiffDays * SwapFlagValue;

    }

    //61-4 شرح سبب التعديل 

   /* int GetDifferenceInDays(stDate Date1, stDate Date2, bool IncludingEndDay = false)
    {
        int DiffDays = 0;
        short SwapFlagValue = 1;

        if (IsDate1AfterDate2(Date1, Date2))
        {
            SwapDates(Date1, Date2);
            SwapFlagValue = -1;
        }

        while (IsDate1BeforeDate2(Date1, Date2))
        {
            Date1 = IncreaseDateByOneDay(Date1);
            DiffDays++;
        }

        return IncludingEndDay ? ++DiffDays * SwapFlagValue : DiffDays * SwapFlagValue;

    }*/

    clsDate GetSystemDate()
    {
        clsDate CurrentDate;

        time_t T = time(0);
        tm* now = localtime(&T);

        CurrentDate.Year = now->tm_year + 1900;
        CurrentDate.Month = now->tm_mon + 1;
        CurrentDate.Day = now->tm_mday;

        return CurrentDate;
    }

    clsDate IncreaseDateByXDays(clsDate Date, short NumberOfDays)
    {
        for (short i = 1; i <= NumberOfDays; i++)
        {
            Date = IncreaseDateByOneDay(Date);
        }

        return Date;
    }

    clsDate IncreaseDateByOneWeek(clsDate Date)
    {
        for (short i = 1; i <= 7; i++)
        {
            Date = IncreaseDateByOneDay(Date);
        }

        return Date;
    }

    clsDate IncreaseDateByXWeeks(clsDate Date, short NumberOfWeeks)
    {
        for (short i = 1; i <= NumberOfWeeks; i++)
        {
            Date = IncreaseDateByOneWeek(Date);
        }

        return Date;
    }

    clsDate IncreaseDateByOneMonth(clsDate Date)
    {

        if (IsLastMonthInYear(Date.Month))
        {
            Date.Year++;
            Date.Month = 1;
        }

        else
            Date.Month++;

        short NumberOfDaysInCurrentMonth = NumberOfDaysInAMonth(Date.Month, Date.Year);

        if (NumberOfDaysInCurrentMonth < Date.Day)
            Date.Day = NumberOfDaysInCurrentMonth;


        return Date;
    }

    clsDate IncreaseDateByXMonths(clsDate Date, short NumberOfMonths)
    {
        for (short i = 1; i <= NumberOfMonths; i++)
        {
            Date = IncreaseDateByOneMonth(Date);
        }

        return Date;
    }


    //sDate IncreaseDateByOneYear(sDate Date)
    //{
    //    return IncreaseDateByXMonths(Date, 12);
    //}

    clsDate IncreaseDateByOneYear(clsDate Date)
    {
        Date.Year++;


        short NumberOfDaysInCurrentMonth = NumberOfDaysInAMonth(Date.Month, Date.Year);

        if (NumberOfDaysInCurrentMonth < Date.Day)
            Date.Day = NumberOfDaysInCurrentMonth;


        return Date;
    }

    clsDate IncreaseDateByXYears(clsDate Date, short NumberOfYears)
    {
        for (short i = 1; i <= NumberOfYears; i++)
        {
            Date = IncreaseDateByOneYear(Date);
        }

        return Date;
    }

    clsDate IncreaseDateByXYearsFaster(clsDate Date, short NumberOfYears)
    {
        Date.Year += NumberOfYears;

        short NumberOfDaysInCurrentMonth = NumberOfDaysInAMonth(Date.Month, Date.Year);

        if (NumberOfDaysInCurrentMonth < Date.Day)
            Date.Day = NumberOfDaysInCurrentMonth;

        return Date;
    }

    clsDate IncreaseDateByOneDecade(clsDate Date)
    {
        for (short i = 1; i <= 10; i++)
        {
            Date = IncreaseDateByOneYear(Date);
        }

        return Date;
    }

    clsDate IncreaseDateByXDecades(clsDate Date, short NumberOfDecades)
    {
        for (short i = 1; i <= NumberOfDecades * 10; i++)
        {
            Date = IncreaseDateByOneYear(Date);
        }

        return Date;
    }

    clsDate IncreaseDateByXDecadesFaster(clsDate Date, short NumberOfDecades)
    {
        Date.Year += (10 * NumberOfDecades);

        short NumberOfDaysInCurrentMonth = NumberOfDaysInAMonth(Date.Month, Date.Year);

        if (NumberOfDaysInCurrentMonth < Date.Day)
            Date.Day = NumberOfDaysInCurrentMonth;


        return Date;
    }

    clsDate IncreaseDateByOneCentury(clsDate Date)
    {
        Date.Year += 100;

        short NumberOfDaysInCurrentMonth = NumberOfDaysInAMonth(Date.Month, Date.Year);

        if (NumberOfDaysInCurrentMonth < Date.Day)
            Date.Day = NumberOfDaysInCurrentMonth;

        return Date;
    }

    clsDate IncreaseDateByOneMillenium(clsDate Date)
    {
        Date.Year += 1000;

        short NumberOfDaysInCurrentMonth = NumberOfDaysInAMonth(Date.Month, Date.Year);

        if (NumberOfDaysInCurrentMonth < Date.Day)
            Date.Day = NumberOfDaysInCurrentMonth;

        return Date;
    }

    bool IsFirstDayInMonth(short Day)
    {
        return (Day == 1);
    }

    bool IsFirstMonthInYear(short Month)
    {
        return (Month == 1);
    }

    clsDate DecreaseDateByOneDay(clsDate Date)
    {
        if (IsFirstDayInMonth(Date.Day))
        {
            if (IsFirstMonthInYear(Date.Month))
            {
                Date.Year--;
                Date.Month = 12;
                Date.Day = 31;
            }

            else
            {
                Date.Month--;
                Date.Day = NumberOfDaysInAMonth(Date.Month, Date.Year);
            }
        }

        else
        {
            Date.Day--;
        }

        return Date;
    }

    clsDate DecreaseDateByXDays(clsDate Date, short NumberOfDays)
    {
        for (short i = 1; i <= NumberOfDays; i++)
        {
            Date = DecreaseDateByOneDay(Date);
        }

        return Date;
    }

    clsDate DecreaseDateByOneWeek(clsDate Date)
    {
        for (short i = 1; i <= 7; i++)
        {
            Date = DecreaseDateByOneDay(Date);
        }

        return Date;
    }

    clsDate DecreaseDateByXWeeks(clsDate Date, short NumberOfWeeks)
    {
        for (short i = 1; i <= NumberOfWeeks; i++)
        {
            Date = DecreaseDateByOneWeek(Date);
        }

        return Date;
    }

    clsDate DecreaseDateByOneMonth(clsDate Date)
    {
        if (IsFirstMonthInYear(Date.Month))
        {
            Date.Year--;
            Date.Month = 12;
        }

        else
        {
            Date.Month--;
        }

        short NumberOfDaysInCurrentMonth = NumberOfDaysInAMonth(Date.Month, Date.Year);

        if (NumberOfDaysInCurrentMonth < Date.Day)
            Date.Day = NumberOfDaysInCurrentMonth;

        return Date;
    }

    clsDate DecreaseDateByXMonths(clsDate Date, short NumberOfMonths)
    {
        for (short i = 1; i <= NumberOfMonths; i++)
        {
            Date = DecreaseDateByOneMonth(Date);
        }

        return Date;
    }

    clsDate DecreaseDateByOneYear(clsDate Date)
    {
        Date.Year--;

        short NumberOfDaysInCurrentMonth = NumberOfDaysInAMonth(Date.Month, Date.Year);

        if (NumberOfDaysInCurrentMonth < Date.Day)
            Date.Day = NumberOfDaysInCurrentMonth;

        return Date;
    }

    clsDate DecreaseDateByXYears(clsDate Date, short NumberOfYears)
    {
        for (short i = 1; i <= NumberOfYears; i++)
        {
            Date = DecreaseDateByOneYear(Date);
        }


        return Date;
    }

    clsDate DecreaseDateByXYearsFaster(clsDate Date, short NumberOfYears)
    {
        Date.Year -= NumberOfYears;


        short NumberOfDaysInCurrentMonth = NumberOfDaysInAMonth(Date.Month, Date.Year);

        if (NumberOfDaysInCurrentMonth < Date.Day)
            Date.Day = NumberOfDaysInCurrentMonth;

        return Date;
    }

    clsDate DecreaseDateByOneDecade(clsDate Date)
    {
        for (short i = 1; i <= 10; i++)
        {
            Date = DecreaseDateByOneYear(Date);
        }

        return Date;
    }

    clsDate DecreaseDateByXDecades(clsDate Date, short NumberOfDecades)
    {
        for (short i = 1; i <= NumberOfDecades * 10; i++)
        {
            Date = DecreaseDateByOneYear(Date);
        }

        return Date;
    }

    clsDate DecreaseDateByXDecadesFaster(clsDate Date, short NumberOfDecades)
    {
        Date.Year -= (NumberOfDecades * 10);

        short NumberOfDaysInCurrentMonth = NumberOfDaysInAMonth(Date.Month, Date.Year);

        if (NumberOfDaysInCurrentMonth < Date.Day)
            Date.Day = NumberOfDaysInCurrentMonth;

        return Date;
    }

    clsDate DecreaseDateByoneCentury(clsDate Date)
    {
        Date.Year -= 100;

        short NumberOfDaysInCurrentMonth = NumberOfDaysInAMonth(Date.Month, Date.Year);

        if (NumberOfDaysInCurrentMonth < Date.Day)
            Date.Day = NumberOfDaysInCurrentMonth;

        return Date;
    }

    clsDate DecreaseDateByOneMillennium(clsDate Date)
    {
        Date.Year -= 1000;

        short NumberOfDaysInCurrentMonth = NumberOfDaysInAMonth(Date.Month, Date.Year);

        if (NumberOfDaysInCurrentMonth < Date.Day)
            Date.Day = NumberOfDaysInCurrentMonth;

        return Date;
    }






    bool IsEndOfWeek(clsDate Date)
    {
        return (DayOfWeekOrder(Date) == 6);
    }

    bool IsWeekEnd(clsDate Date)
    {
        //Weekends are Fri and Sat

        short DateIndex = DayOfWeekOrder(Date);

        return (DateIndex == 5 || DateIndex == 6);
    }

    bool IsBusinessDay(clsDate Date)
    {
        //return(DayOfWeekOrder != 5 || DayOfWeekOrder != 6);
        return (!IsWeekEnd(Date));
    }

    short DaysUntilTheEndOfWeek(clsDate Date)
    {
        return(6 - DayOfWeekOrder(Date));
    }

    short DaysUntilTheEndOfMonth(clsDate Date)
    {
        clsDate EndOfMonthDate;

        EndOfMonthDate.Day = NumberOfDaysInAMonth(Date.Month, Date.Year);
        EndOfMonthDate.Month = Date.Month;
        EndOfMonthDate.Year = Date.Year;

        return GetDifferenceInDays(Date, EndOfMonthDate, true);
    }

    short DaysUntilTheEndOfYear(clsDate Date)
    {
        clsDate EndOfYearDate;

        EndOfYearDate.Day = 31;
        EndOfYearDate.Month = 12;
        EndOfYearDate.Year = Date.Year;

        return GetDifferenceInDays(Date, EndOfYearDate, true);
    }

    short CalculateVacationDays(clsDate DateFrom, clsDate DateTo)
    {
        short DaysCount = 0;

        while (IsDate1BeforeDate2(DateFrom, DateTo))
        {
            if (IsBusinessDay(DateFrom))
                DaysCount++;

            DateFrom = IncreaseDateByOneDay(DateFrom);
        }

        return DaysCount;
    }

    clsDate CalculateVacationReturnDate(clsDate DateFrom, short VacationDays)
    {
        short WeekEndCount = 0;

        //in case the data  is weekend keep adding one day util you reach business day
        //we get rid of all weekends before the first business day

        //Unimportant

        while (IsWeekEnd(DateFrom))
        {
            DateFrom = IncreaseDateByOneDay(DateFrom);
        }

        for (short i = 1; i <= VacationDays + WeekEndCount; i++)
        {
            if (IsWeekEnd(DateFrom))
                WeekEndCount++;

            DateFrom = IncreaseDateByOneDay(DateFrom);
        }

        //in case the return date is week end keep adding one day util you reach business day.
        while (IsWeekEnd(DateFrom))
        {
            DateFrom = IncreaseDateByOneDay(DateFrom);
        }

        return DateFrom;
    }

    enum enDateCompare { Before = -1, Equal = 0, After = 1 };

    enDateCompare CompareDates(clsDate Date1, clsDate Date2)
    {
        if (IsDate1BeforeDate2(Date1, Date2))
            return enDateCompare::Before;

        if (IsDate1EqualDate2(Date1, Date2))
            return enDateCompare::Equal;

        /*if (IsDate1AfterDate2(Date1, Date2))
            return enDateCompare::After;*/

            //This is Faster
        return enDateCompare::After;
    }

    struct clsPeriod
    {
        clsDate StartDate;
        clsDate EndDate;
    };

    clsPeriod ReadPeriod()
    {
        clsPeriod Period;

        cout << "\nEnter Start Date  : \n";
        Period.StartDate = ReadFullDate();

        cout << "\nEnter End Date  : \n";
        Period.EndDate = ReadFullDate();

        return Period;
    }

    bool IsOverLapPeriods(clsPeriod Period1, clsPeriod Period2)
    {
        if (CompareDates(Period1.StartDate, Period2.EndDate) == enDateCompare::After
            ||
            CompareDates(Period1.EndDate, Period2.StartDate) == enDateCompare::Before)
            return false;

        return true;

    }

    int PeriodLengthInDays(clsPeriod Period, bool IncludingEndDay = false)
    {
        return(GetDifferenceInDays(Period.StartDate, Period.EndDate, IncludingEndDay));
    }




    bool IsDateInPeriod(clsPeriod Period, clsDate Date)
    {
        return !(CompareDates(Period.StartDate, Date) == enDateCompare::After
            ||
            CompareDates(Period.EndDate, Date) == enDateCompare::Before);
    }

    int CountOverLapDays(clsPeriod Period1, clsPeriod Period2)
    {
        short Period1Length = PeriodLengthInDays(Period1, true);
        short Period2Length = PeriodLengthInDays(Period2, true);
        int OverLapDays = 0;

        if (!IsOverLapPeriods(Period1, Period2))
            return 0;

        if (Period1Length < Period2Length)
        {
            while (IsDate1BeforeDate2(Period1.StartDate, Period1.EndDate))
            {
                if (IsDateInPeriod(Period2, Period1.StartDate))
                    OverLapDays++;

                Period1.StartDate = IncreaseDateByOneDay(Period1.StartDate);
            }
        }

        else
        {
            while (IsDate1BeforeDate2(Period2.StartDate, Period2.EndDate))
            {
                if (IsDateInPeriod(Period1, Period2.StartDate))
                    OverLapDays++;

                Period2.StartDate = IncreaseDateByOneDay(Period2.StartDate);
            }
        }

        return OverLapDays;
    }

    // My Sulotion To IsValidDate
    
     /*
    bool IsValidDay(stDate Date)
    {
        return (1 <= Date.Day && Date.Day <= NumberOfDaysInAMonth(Date.Month, Date.Year));
    }
    
    bool IsValidMonth(short Month)
    {
        return (1 <= Month && Month <= 12);
    }
    
    bool IsValidDate(stDate Date)
    {
        return (IsValidMonth(Date.Month) && IsValidDay(Date));
    }
    */
    
    bool IsValidDate(clsDate Date)
    {
        if (Date.Day < 1 || Date.Day>31)
            return false;

        if (Date.Month < 1 || Date.Month>12)
            return false;

        if (Date.Month == 2)
        {
            if (IsLeapYear(Date.Year))
            {
                if (Date.Day > 29)
                    return false;
            }

            else
            {
                if (Date.Day > 28)
                    return false;
            }
        }

        short DaysInMonth = NumberOfDaysInAMonth(Date.Month, Date.Year);

        if (Date.Day > DaysInMonth)
            return false;

        return true;

    }

    clsDate StringToDate(string Text)
    {
        vector<string> vDate = StringManipulation::SplitString(Text, "/");

        clsDate Date;

        Date.Day = stoi(vDate[0]);
        Date.Month = stoi(vDate[1]);
        Date.Year = stoi(vDate[2]);

        return Date;
    }

    string DateToString(clsDate Date)
    {
        return to_string(Date.Day) + "/" + to_string(Date.Month) + "/" + to_string(Date.Year);
    }

    string FormatDate(clsDate Date, string DateFormat = "dd/mm/yyyy")
    {
        string FormattedDateString = "";

        FormattedDateString = StringManipulation::ReplaceWordInStringUsingBuiltInFunction(DateFormat, "dd", to_string(Date.Day));
        FormattedDateString = StringManipulation::ReplaceWordInStringUsingBuiltInFunction(FormattedDateString, "mm", to_string(Date.Month));
        FormattedDateString = StringManipulation::ReplaceWordInStringUsingBuiltInFunction(FormattedDateString, "yyyy", to_string(Date.Year));

        return FormattedDateString;
    }

}