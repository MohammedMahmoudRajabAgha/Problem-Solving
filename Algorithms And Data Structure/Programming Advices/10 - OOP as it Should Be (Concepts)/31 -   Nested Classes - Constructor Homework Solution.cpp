// 1 
// Member Default Initialization + Assignment
// //Programming Advices...

#include <iostream>

using namespace std;

class clsPerson
{
private:


	class clsAddress
	{
		string _AddressLine1;
		string _AddressLine2;
		string _City;
		string _Country;

	public:

		clsAddress(string AddressLine1, string AddressLine2, string City, string Country)
		{
			_AddressLine1 = AddressLine1;
			_AddressLine2 = AddressLine2;
			_City = City;
			_Country = Country;
		}

		void SetAddressLine1(string AddressLine1)
		{
			_AddressLine1 = AddressLine1;
		}
		string AddressLine1()
		{
			return _AddressLine1;
		}

		void SetAddressLine2(string AddressLine2)
		{
			_AddressLine2 = AddressLine2;
		}
		string AddressLine2()
		{
			return _AddressLine2;
		}

		void SetCity(string City)
		{
			_City = City;
		}
		string City()
		{
			return _City;
		}

		void SetCountry(string Country)
		{
			_Country = Country;
		}
		string Country()
		{
			return _Country;
		}



		void Print()
		{
			cout << "\nAddrsess.";
			cout << "\nAddress Line1 : " << _AddressLine1;
			cout << "\nAddress Line2 : " << _AddressLine2;
			cout << "\nCity          : " << _City;
			cout << "\nCountry       : " << _Country;
			cout << "\n_________________________\n\n";
		}
	};

	string _FullName;

public:


	clsAddress Address = clsAddress("", "", "", "");

	clsPerson(string FirstName, string AddressLine1, string AddressLine2, string City, string Country)
	{
		_FullName = FirstName;

		Address = clsAddress(AddressLine1, AddressLine2, City, Country);


	}

	void SetFullName(string FullName)
	{
		_FullName = FullName;
	}
	string FullName()
	{
		return _FullName;
	}

};

int main()
{
	clsPerson P1("Mohammed Agha", "Darayia", "Ashrafia Sahnaia", "Damascus", "Syria");

	P1.Address.Print();


	system("pause");
	return 0;
}


// 1 - Initial List (the Best Way)...
// Best Practice.
// Direct Initialization.
// No Temporary Object.
// No Assignment.

//#include <iostream>
//
//using namespace std;
//
//class clsPerson
//{
//private:
//
//
//	class clsAddress
//	{
//		string _AddressLine1;
//		string _AddressLine2;
//		string _City;
//		string _Country;
//
//	public:
//
//		clsAddress(string AddressLine1, string AddressLine2, string City, string Country)
//		{
//			_AddressLine1 = AddressLine1;
//			_AddressLine2 = AddressLine2;
//			_City = City;
//			_Country = Country;
//		}
//
//		void SetAddressLine1(string AddressLine1)
//		{
//			_AddressLine1 = AddressLine1;
//		}
//		string AddressLine1()
//		{
//			return _AddressLine1;
//		}
//
//		void SetAddressLine2(string AddressLine2)
//		{
//			_AddressLine2 = AddressLine2;
//		}
//		string AddressLine2()
//		{
//			return _AddressLine2;
//		}
//
//		void SetCity(string City)
//		{
//			_City = City;
//		}
//		string City()
//		{
//			return _City;
//		}
//
//		void SetCountry(string Country)
//		{
//			_Country = Country;
//		}
//		string Country()
//		{
//			return _Country;
//		}
//
//
//
//		void Print()
//		{
//			cout << "\nAddrsess.";
//			cout << "\nAddress Line1 : " << _AddressLine1;
//			cout << "\nAddress Line2 : " << _AddressLine2;
//			cout << "\nCity          : " << _City;
//			cout << "\nCountry       : " << _Country;
//			cout << "\n_________________________\n\n";
//		}
//	};
//
//	string _FullName;
//
//public:
//
//	clsAddress Address;
//
//	clsPerson(string FirstName, string AddressLine1, string AddressLine2, string City, string Country)
//		: Address(AddressLine1, AddressLine2, City, Country)
//	{
//		_FullName = FirstName;
//
//	}
//
//	void SetFullName(string FullName)
//	{
//		_FullName = FullName;
//	}
//	string FullName()
//	{
//		return _FullName;
//	}
//
//};
//
//int main()
//{
//	clsPerson P1("Mohammed Agha", "Darayia", "Ashrafia Sahnaia", "Damascus", "Syria");
//
//	P1.Address.Print();
//
//
//	system("pause");
//	return 0;
//}




// 2 - Default Constructore + Assignement...


//
//#include <iostream>
//
//using namespace std;
//
//class clsPerson
//{
//private:
//
//
//	class clsAddress
//	{
//		string _AddressLine1;
//		string _AddressLine2;
//		string _City;
//		string _Country;
//
//	public:
//		//Default Constructore...
//		clsAddress()
//		{
//
//		}
//
//		//Parameterized Constructore...
//		clsAddress(string AddressLine1, string AddressLine2, string City, string Country)
//		{
//			_AddressLine1 = AddressLine1;
//			_AddressLine2 = AddressLine2;
//			_City = City;
//			_Country = Country;
//		}
//
//
//
//		////Copy Constructore...
//		//clsAddress(clsAddress& OldObj)
//		//{
//		//	_AddressLine1 = OldObj._AddressLine1;
//		//	_AddressLine2 = OldObj._AddressLine2;
//		//	_City = OldObj._City;
//		//	_Country = OldObj._Country;
//		//}
//
//		void Print()
//		{
//			cout << "\nAddrsess.";
//			cout << "\nAddress Line1 : " << _AddressLine1;
//			cout << "\nAddress Line2 : " << _AddressLine2;
//			cout << "\nCity          : " << _City;
//			cout << "\nCountry       : " << _Country;
//			cout << "\n_________________________\n\n";
//		}
//
//	};
//
//	string _FullName;
//
//public:
//
//	//We Use Default Constructore...
//	clsAddress Address;
//
//	clsPerson(string FirstName, string AddressLine1, string AddressLine2, string City, string Country)
//	{
//		_FullName = FirstName;
//
//		//Initial Temp Object With Initial Parameters To Copy this Info To Essential Object (Address) 
//		//We Use Parameterized Constructore...
//		clsAddress TempAddress(AddressLine1, AddressLine2, City, Country);
//
//		//We Use  Copy ((Assignment)) Operator
//		//We don't use Copy Constructor Because it's use when we Initial new object with assignment Ex. clsAddress Add1 = TempAddress
//		Address = TempAddress;
//
//	}
//
//};
//
//int main()
//{
//	clsPerson P1("Mohammed Agha", "Darayia", "Ashrafia Sahnaia", "Damascus", "Syria");
//
//	P1.Address.Print();
//
//
//	system("pause");
//	return 0;
//}
//

// 4 
// Dynamic Allocation (Heap)
// Must call delete in Destructor.


//#include <iostream>
//
//using namespace std;
//
//class clsPerson
//{
//private:
//
//
//	class clsAddress
//	{
//		string _AddressLine1;
//		string _AddressLine2;
//		string _City;
//		string _Country;
//
//	public:
//
//		clsAddress(string AddressLine1, string AddressLine2, string City, string Country)
//		{
//			_AddressLine1 = AddressLine1;
//			_AddressLine2 = AddressLine2;
//			_City = City;
//			_Country = Country;
//		}
//
//		void SetAddressLine1(string AddressLine1)
//		{
//			_AddressLine1 = AddressLine1;
//		}
//		string AddressLine1()
//		{
//			return _AddressLine1;
//		}
//
//		void SetAddressLine2(string AddressLine2)
//		{
//			_AddressLine2 = AddressLine2;
//		}
//		string AddressLine2()
//		{
//			return _AddressLine2;
//		}
//
//		void SetCity(string City)
//		{
//			_City = City;
//		}
//		string City()
//		{
//			return _City;
//		}
//
//		void SetCountry(string Country)
//		{
//			_Country = Country;
//		}
//		string Country()
//		{
//			return _Country;
//		}
//
//
//
//		void Print()
//		{
//			cout << "\nAddrsess.";
//			cout << "\nAddress Line1 : " << _AddressLine1;
//			cout << "\nAddress Line2 : " << _AddressLine2;
//			cout << "\nCity          : " << _City;
//			cout << "\nCountry       : " << _Country;
//			cout << "\n_________________________\n\n";
//		}
//	};
//
//	string _FullName;
//
//public:
//
//
//	clsAddress* Address;
//
//	clsPerson(string FirstName, string AddressLine1, string AddressLine2, string City, string Country)
//	{
//		_FullName = FirstName;
//
//		Address = new clsAddress(AddressLine1, AddressLine2, City, Country);
//
//
//	}
//
//	void SetFullName(string FullName)
//	{
//		_FullName = FullName;
//	}
//	string FullName()
//	{
//		return _FullName;
//	}
//
//	~clsPerson()
//	{
//		delete Address;
//	}
//
//};
//
//int main()
//{
//	clsPerson P1("Mohammed Agha", "Darayia", "Ashrafia Sahnaia", "Damascus", "Syria");
//
//	P1.Address->Print();
//
//
//	system("pause");
//	return 0;
//}




