/*
	Title:  	lab_2b.cpp
	Author:		Finlay Patoto
	Date:		01/32/2022	
	Purpose:	This program is written for stores that need to calculate 
				the total cost of two different items.
*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
	//define your variables here
	//Item one variables
	string item1Purchased = "";
	int item1PurchasedAmount = 0;
	float item1Cost = 0;
	//Item two variables
	string item2Purchased = "";
	int item2PurchasedAmount = 0;
	float item2Cost = 0;

	const float tax = 1.0975f;
	
	/* 	the line below will allow floating point amounts to display
		two numbers after the decimal point.  (it will make amounts pretty) */
	cout <<	setprecision(2) << fixed << showpoint; 

	cout << "\nPlease input the name of the first item:  ";
	getline(cin, item1Purchased); // input of name of item 1

	cout << "Please input the number of " << item1Purchased << " bought:  ";
	cin >> item1PurchasedAmount; // input of amount of item 1 bought

	cout << "Please input the price of " << item1Purchased << ":  $";
	cin >> item1Cost; // input of the price of item 1
	cin.ignore();


	cout << "\n\nPlease input the name of the second item:  ";
	getline(cin, item2Purchased); // input of name of item 2

	cout << "Please input the number of " << item2Purchased << " bought:  ";
	cin >> item2PurchasedAmount; // input of amount of item 2 bought

	cout << "Please input the price of " << item2Purchased << ":  $";
	cin >> item2Cost; // input of the price of item 2

	cout << "\nThe total bill is $" << (item1PurchasedAmount * item1Cost * tax) + (item2PurchasedAmount * item2Cost * tax) << endl; // This calculates the total cost of the items
	
	
	return 0;
}