/* CIS22B Lab 4
Author: Xiaosa Yang, Andrew Torrellas
Description: This program demostrates four templates and  their use. The min function compares two arguments 
taken in and returns the smaller of the two; The max function compares two arguments taken in and returns the 
bigger of the two;The absoluteVal function takes one nummeric argument and returns the absolute value of the 
argument; The total function keeps a the runing total of numeric values user enters and return the sum of all
inputs.
Lab partner score: 3

*/

#define _CRT_SECURE_NO_WARNINGS
#include<cstdlib>
#include<iostream>
#include<iomanip>
// includes implementation files for class Min and Max
#include "Maximum.h"
#include "Mininum.h"
// Define global variable to hold the sum for total function
// and initialize variable to 0
double total_val = 0;

using namespace std;

//Template definition for min function
template <class T>
T min(T T1, T T2)
{
	// returns the smaller value
	return (T1 > T2) ? T2 : T1;
}
// Template definition for max function
template <class M>
M max(M M1, M M2)
{
	// returns the bigger value
	return (M1 > M2) ? M1 : M2;
}
// Template definition for absoluteVal function
template <class E>
E absoluteVal(E num)
{
 return (num >= 0) ? num : -num ;
}
// Template definition for total function
template <class H>
H total(H num)
{
	// define total_val to the sum of nums
	total_val += num;
	// return accumulator
	return total_val;
}

int main()
{
	// define variables to hold user input for different data types
	int userInt1, userInt2;
	float userFloat1, userFloat2;
	char userChar1, userChar2;
	cout << setprecision(5);
	
	// display message to let user know they are testing the min function
	cout << "This part of the program test the min function which returns the smaller value between two values." << endl;
	cout << endl;
	// prompt user to enter intergers
	cout << "Enter an interger: ";
	cin >> userInt1;
	cout << "Enter an other interger: ";
	cin >> userInt2;
	// display the smaller value by calling template function min.
	cout << "The smaller value between the two intergers is: " << min(userInt1, userInt2) << endl;
	cout << endl;
	// Prompt user to enter two float values 
	cout << "Enter a floating-point value: ";
	cin >> userFloat1;
	cout << "Enter another floating-point value: ";
	cin >> userFloat2;
	// display the smaller float value by calling template function min
	cout << "The smaller value between the two floating-point values is: " << min(userFloat1, userFloat2) << endl;
	cout << endl;
	// prompt user to enter two characters
	cout << "Enter a character: ";
	cin >> userChar1;
	cout << "Enter another character: ";
	cin >> userChar2;
	// display the smaller character by calling template function min
	cout << "The smaller character between the two character is: " << min(userChar1, userChar2) << endl;
	cout << endl;
	// define an instance of the Min class and passing 4 as argument
	Min s1(4);
	// define another instance of the Min class and passing 6 as argument
	Min s2(6);
	// define an instance smaller and call template function min
	Min smaller = min(s1, s2);
	// display the smaller value using accessor method
	cout << "Given two numbers 4 and 6, ";
	cout << "the smaller value between the two is: " << smaller.getMin() << endl;
	cout << endl;

	// display message to let user know they are testing max function
	cout << "This part of the program test the max function which returns the bigger value between two values." << endl;
	cout << endl;
	// prompt user to enter intergers
	cout << "Enter an interger: ";
	cin >> userInt1;
	cout << "Enter an other interger: ";
	cin >> userInt2;
	// display the bigger value by calling template function max
	cout << "The bigger value between the two intergers is: " << max(userInt1, userInt2) << endl;
	cout << endl;
	// prompt user to enter float values
	cout << "Enter a floating-point value: ";
	cin >> userFloat1;
	cout << "Enter another floating-point value: ";
	cin >> userFloat2;
	// display the bigger value by calling the template function max
	cout << "The bigger value between the two floating-point values is: " << max(userFloat1, userFloat2) << endl;
	cout << endl;
	// prompt user to enter two charcters
	cout << "Enter a character: ";
	cin >> userChar1;
	cout << "Enter another character: ";
	cin >> userChar2;
	// display the bigger value by calling the template function max
	cout << "The bigger character between the two character is: " << max(userChar1, userChar2) << endl;
	cout << endl;
	// define objects for class Max and passing int as argument
	Max b1(2);
	Max b2(9);
	// define an instance bigger for class Max and call the template function max
	Max bigger = max(b1, b2);
	// display the bigger value using accessor method
	cout << "Given two numbers 2 and 9, ";
	cout << "the bigger value between the two is: " << bigger.getMax() << endl;
	cout << endl;

	// display message to let user know they are testing the absoluteVal function
	cout << "This part of the program test the absoluteVal function which returns the absolute value of a value." << endl;
	cout << endl;
	// prompt user to enter a positive interger
	cout << "Enter a positive interger: ";
	cin >> userInt1;
	// display the absolute value of user input by calling template functin absoluteVal
	cout << "The absolute value of " << userInt1 << " is " << absoluteVal(userInt1) << endl;
	cout << endl;
	// prompt user to enter a negative interger
	cout << "Enter a negative interger: ";
	cin >> userInt1;
	// display the absolute value of the negative interger by calling template function absoluteVal
	cout << "The absolute value of " << userInt1 << " is " << absoluteVal(userInt1) << endl;
	cout << endl;
	// prompt user to enter a positive float value
	cout << "Enter a postive floating-point value: ";
	cin >> userFloat1;
	// display the absolute value of the postive float value by calling template function absoluteVal
	cout << "The absolute value of " << userFloat1 << " is " << absoluteVal(userFloat1) << endl;
	cout << endl;
	// prompt user to enter a negative float value
	cout << "Enter a negative floating-point value: ";
	cin >> userFloat1;
	// display the absolute value of the negative float value by calling template function absoluteVal
	cout << "The absolute value of " << userFloat1 << " is " << absoluteVal(userFloat1) << endl;
	cout << endl;

	// display a message to let user know they are testing the total function
	cout << "This part of the progam test the total function and it will keep a running ";
	cout << "total of values entered by the user." << endl;
	// promt user to enter exit the loop
	cout << "Enter -1 if you wish to stop adding more values to current total, and display current total. " << endl;

	while (1)
	{
		cout << "Enter an interger: ";
		cin >> userInt1;
		// loop stops if user enter -1 for the interger input
		if (userInt1 == -1)
			break;
		total(userInt1);
		cout << "Enter a floating-point value: ";
		cin >> userFloat1;
		// loop stops if user enter -1.0 for the float value input
		if (userFloat1 == -1.0)
			break;
		total(userFloat1);
	}
	// display the added total once user chose to exit the loop
	cout << "Your total value is now: " << total_val << endl;

	system("pause");
	return 0;
}
