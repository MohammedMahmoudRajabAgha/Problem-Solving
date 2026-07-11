#include <iostream>

using namespace std;

class clsCalculator
{
private:
	float _Result = 0;
	float _LastNumber = 0;
	string _LastOperation = "Cancle";
	float _PreviosResult = 0;

	//Abstraction
	bool _IsZero(float Number)
	{
		return (Number == 0);
	}

public:

	void Clear()
	{
		_Result = 0;
		_LastNumber = 0;
		_LastOperation = "Cancle";
		_PreviosResult = 0;
	}

	void Add(float Number)
	{
		_LastNumber = Number;
		_PreviosResult = _Result;
		_LastOperation = "Add";
		_Result += Number;
	}

	void Subtract(float Number)
	{
		_LastNumber = Number;
		_PreviosResult = _Result;
		_LastOperation = "Subtraction";
		_Result -= Number;
	}

	void Multiply(float Number)
	{
		_LastNumber = Number;
		_PreviosResult = _Result;
		_LastOperation = "Muliplying";
		_Result *= Number;
	}

	void Divid(float Number)
	{
		_LastNumber = Number;

		if (_IsZero(Number))
		{
			Number = 1;
		}
		_PreviosResult = _Result;
		_LastOperation = "Dividing";
		_Result /= Number;
	}

	void CancelLastOperation()
	{
		_LastNumber = 0;
		_LastOperation = "Cancelling Last Operation";
		_Result = _PreviosResult;
	}

	float GetFinalResult()
	{
		return _Result;
	}

	void PrintResult()
	{
		cout << "Result After " << _LastOperation << " " << _LastNumber << " is : " << _Result << "\n";
	}
};

int main()
{
  
	clsCalculator Calculator1;

	Calculator1.Clear();

	Calculator1.Add(10);
	Calculator1.PrintResult();

	Calculator1.Add(100);
	Calculator1.PrintResult();

	Calculator1.Subtract(20);
	Calculator1.PrintResult();

	Calculator1.Divid(0);
	Calculator1.PrintResult();


	Calculator1.Divid(2);
	Calculator1.PrintResult();

	Calculator1.Multiply(3);
	Calculator1.PrintResult();

	Calculator1.CancelLastOperation();
	Calculator1.PrintResult();

	Calculator1.Clear();
	Calculator1.PrintResult();


	system("pause>0");
	return 0;
}