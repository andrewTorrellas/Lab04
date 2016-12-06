#include<cstdlib>
#include<iostream>
#include<iomanip>
double total_val = 0;

using namespace std;

//Template definition for min function
template <class T1, class T2>
T1 min(T1 &num1, T2 &num2)
{
	if (num1 > num2 || num1 == num2)
		return num2;
	else if (num2 > num1)
		return num1;
}

//Template definition for max function
template <class T1, class T2>
T1 max(T1 &num1, T2 &num2)
{
	if (num1 > num2 || num1 == num2)
		return num1;
	else if (num2 > num1)
		return num2;
}

// Template definition for absoluteVal function
template <class E>
E absoluteVal(E num)
{
	return abs(num);
}

// Template definition for total function
template <class H>
H total(H num)
{
	total_val += num;
	// cout << "Total val is: " << total_val << endl; // debug statment
	return total_val;
}


int main()
{
	int userInt;
	float userFloat;
	cout << setprecision(5);

	cout << "Enter an interger: ";
	cin >> userInt;
	cout << "Enter a floating-point value: ";
	cin >> userFloat;
	cout << "The mininum value is: " << min(userInt, userFloat) << endl;
	cout << endl;

	cout << "Enter an interger: ";
	cin >> userInt;
	cout << "Enter a floating-point value: ";
	cin >> userFloat;
	cout << "The mininum value is: " << max(userInt, userFloat) << endl;
	cout << endl;


	// Test absoluteVal function by passing postive interger input
	cout << "Enter a positive interger: ";
	cin >> userInt;
	cout << "The absolute value of " << userInt << " is: ";
	cout << abs(userInt) << endl;
	// Test absoluteVal function by passing negative interger input
	cout << "Enter a negative interger: ";
	cin >> userInt;
	cout << "The absolute value of " << userInt << " is: ";
	cout << abs(userInt) << endl;
	cout << endl;

	// Test absoluteVal function by passing positive floating-point value
	cout << "Enter a positive floating-point value: ";
	cin >> userFloat;
	cout << "The absolute value of " << userFloat << " is: ";
	cout << abs(userFloat) << endl;
	// Test absoluteVal function by passing negative floating-point value
	cout << "Enter a negative floating-point value: ";
	cin >> userFloat;
	cout << "The absolute value of " << userFloat << " is: ";
	cout << abs(userFloat) << endl;
	cout << endl;


	cout << "This will keep a running total of values entered by the user." << endl;
	cout << "Enter -1 to exit." << endl;
	while (1)
	{
		cout << "Enter an interger: ";
		cin >> userInt;
		if (userInt == -1)
			break;
		total(userInt);
		cout << "Enter a floating-point value: ";
		cin >> userFloat;
		if (userFloat == -1.0)
			break;
		total(userFloat);
	}

	cout << "Your total value is now: " << total_val << endl;

	system("pause");
	return 0;
}