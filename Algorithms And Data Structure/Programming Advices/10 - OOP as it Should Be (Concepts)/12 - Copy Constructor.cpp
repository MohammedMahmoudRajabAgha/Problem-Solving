#include <iostream>
#include<string>
#include"clsAddress.h";

using namespace std;

int main()
{
  
    clsAddress Address1("Damascus,Sahnaya", "Albayan", "5555", "1111");
    cout << "\nAddress1.\n";
    cout << "***************************\n";
    Address1.Print();



    clsAddress Address2 = Address1;
    //clsAddress Address2(Address1);
    
    cout << "\nAddress2.\n";
    cout << "***************************\n";
    Address2.Print();
     
    cout << "After Modifing\n";
    cout << "***************************\n";
    Address1.Print();

    system("pause>0");
    return 0;
}




//
//
//#include <iostream>
//#include<string>
//
//using namespace std;
//
//class clsAddress
//{
//private:
//    string _AddressLine1;
//    string _AddressLine2;
//    string _POBox;
//    string _ZipCode;
//
//public:
//
//    clsAddress(string AddressLine1, string AddressLine2, string POBox, string ZipCode)
//    {
//        _AddressLine1 = AddressLine1;
//        _AddressLine2 = AddressLine2;
//        _POBox = POBox;
//        _ZipCode = ZipCode;
//    }
//
//    clsAddress(clsAddress* Old_obj)
//    {
//        _AddressLine1 = (*Old_obj).GetAddressLine1();
//        _AddressLine2 = (*Old_obj).GetAddressLine2();
//        _POBox = (*Old_obj).GetPOBox();
//        _ZipCode = (*Old_obj).GetZipCode();
//
//        Old_obj->SetAddressLine1("koko");
//    }
//
//    void SetAddressLine1(string AddressLine1)
//    {
//        _AddressLine1 = AddressLine1;
//    }
//
//    string GetAddressLine1()
//    {
//        return _AddressLine1;
//    }
//
//    __declspec(property(get = GetAddressLine1, put = SetAddressLine1)) string AddressLine1;
//
//    void SetAddressLine2(string AddressLine2)
//    {
//        _AddressLine2 = AddressLine2;
//    }
//
//    string GetAddressLine2()
//    {
//        return _AddressLine2;
//    }
//
//    __declspec(property(get = GetAddressLine2, put = SetAddressLine2)) string AddressLine2;
//
//    void SetPOBox(string POBox)
//    {
//        _POBox = POBox;
//    }
//
//    string GetPOBox()
//    {
//        return _POBox;
//    }
//
//    __declspec(property(get = GetPOBox, put = SetPOBox)) string POBox;
//
//    void SetZipCode(string ZipCode)
//    {
//        _ZipCode = ZipCode;
//    }
//
//    string GetZipCode()
//    {
//        return _ZipCode;
//    }
//
//    __declspec(property(get = GetZipCode, put = SetZipCode)) string ZipCode;
//
//    void Print()
//    {
//        cout << "\nAddress Details:\n";
//        cout << "-------------------------------\n";
//        cout << "Address Line 1 : " << _AddressLine1 << "\n";
//        cout << "address Line 2 : " << _AddressLine2 << "\n";
//        cout << "POBox          : " << _POBox << "\n";
//        cout << "Zip Code       : " << _ZipCode << "\n";
//
//    }
//
//};
//
//
//int main()
//{
//
//    clsAddress Address1("Damascus,Sahnaya", "Albayan", "5555", "1111");
//    cout << "\nAddress1.\n";
//    cout << "***************************\n";
//    Address1.Print();
//
//
//
//    clsAddress Address2 = &Address1;
//    cout << "\nAddress2.\n";
//    cout << "***************************\n";
//    Address2.Print();
//
//    cout << "After Modifing\n";
//    cout << "***************************\n";
//    Address1.Print();
//
//    system("pause>0");
//    return 0;
//}