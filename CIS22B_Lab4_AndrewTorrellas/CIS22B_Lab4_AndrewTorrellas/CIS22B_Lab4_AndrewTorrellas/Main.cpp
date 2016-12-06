#define _CRT_SECURE_NO_WARNINGS
#include<cstdlib>
#include<iostream>
#include<iomanip>
#include "Maximum.h"
#include "Mininum.h"
double total_val = 0;

using namespace std;

//Template definition for min function
template <class T>
T min(T T1, T T2)
{
	return (T1 > T2) ? T2 : T1;
}
// Template definition for max function
template <class M>
M max(M M1, M M2)
{
	return (M1 > M2) ? M1 : M2;
}
// Template definition for absoluteVal function
template <class E>
E absoluteVal(E num)
{
 return (num >= 0) ? num : -num ;
//	return abs(num);
}
// Template definition for total function
template <class H>
H total(H num)
{
	total_val += num;
	return total_val;
}

int main()
{
	int userInt1, userInt2;
	float userFloat1, userFloat2;
	char userChar1, userChar2;
	cout << setprecision(5);
	
	cout << "This part of the program test the min function which returns the smaller value between two values." << endl;
	cout << endl;
	cout << "Enter an interger: ";
	cin >> userInt1;
	cout << "Enter an other interger: ";
	cin >> userInt2;
	cout << "The smaller value between the two intergers is: " << min(userInt1, userInt2) << endl;
	cout << endl;

	cout << "Enter a floating-point value: ";
	cin >> userFloat1;
	cout << "Enter another floating-point value: ";
	cin >> userFloat2;
	cout << "The smaller value between the two floating-point values is: " << min(userFloat1, userFloat2) << endl;
	cout << endl;

	cout << "Enter a character: ";
	cin >> userChar1;
	cout << "Enter another character: ";
	cin >> userChar2;
	cout << "The smaller character between the two character is: " << min(userChar1, userChar2) << endl;
	cout << endl;

	Min someobj1(4);
	Min someobj2(6);
	Min smaller = min(someobj1, someobj2);
	cout << "Given two numbers 4 and 6, ";
	cout << "the smaller value between the two is: " << smaller.getMin() << endl;
	cout << endl;

	cout << "This part of the program test the max function which returns the bigger value between two values." << endl;
	cout << endl;
	cout << "Enter an interger: ";
	cin >> userInt1;
	cout << "Enter an other interger: ";
	cin >> userInt2;
	cout << "The bigger value between the two intergers is: " << max(userInt1, userInt2) << endl;
	cout << endl;

	cout << "Enter a floating-point value: ";
	cin >> userFloat1;
	cout << "Enter another floating-point value: ";
	cin >> userFloat2;
	cout << "The bigger value between the two floating-point values is: " << max(userFloat1, userFloat2) << endl;
	cout << endl;

	cout << "Enter a character: ";
	cin >> userChar1;
	cout << "Enter another character: ";
	cin >> userChar2;
	cout << "The bigger character between the two character is: " << max(userChar1, userChar2) << endl;
	cout << endl;

	Max a1(2);
	Max a2(9);
	Max bigger = max(a1, a2);
	cout << "Given two numbers 2 and 9, ";
	cout << "the bigger value between the two is: " << bigger.getMax() << endl;
	cout << endl;

	cout << "This part of the program test the absoluteVal function which returns the absolute value of a value." << endl;
	cout << endl;
	cout << "Enter an interger: ";
	cin >> userInt1;
	cout << "The absolute value of" << userInt1 << " is " << absoluteVal(userInt1) << endl;
	cout << endl;

	cout << "Enter a negative interger: ";
	cin >> userInt1;
	cout << "The absolute value of" << userInt1 << " is " << absoluteVal(userInt1) << endl;
	cout << endl;

	cout << "Enter a floating-point value: ";
	cin >> userFloat1;
	cout << "The absolute value of" << userFloat1 << " is " << absoluteVal(userFloat1) << endl;
	cout << endl;

	cout << "Enter a negative floating-point value: ";
	cin >> userFloat1;
	cout << "The absolute value of" << userFloat1 << " is " << absoluteVal(userFloat1) << endl;
	cout << endl;

	cout << "This part of the progam test the total function and it will keep a running ";
	cout << "total of values entered by the user." << endl;
	cout << "Enter -1 to exit." << endl;

	while (1)
	{
		cout << "Enter an interger: ";
		cin >> userInt1;
		if (userInt1 == -1)
			break;
		total(userInt1);
		cout << "Enter a floating-point value: ";
		cin >> userFloat1;
		if (userFloat1 == -1.0)
			break;
		total(userFloat1);
	}
	cout << "Your total value is now: " << total_val << endl;

	system("pause");
	return 0;
}
