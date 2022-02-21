/*
	Title:  	lab_2a.cpp
	Author:		Finlay Patoto
	Date:		01/32/2022	
	Purpose:	This program is written for waiters & waitresses at
				dounts shop so that they can calculate total cost
				of dounts for their customers.
*/

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	//define your variables here
	int donuts_purchased = 0; 		// how many donuts bought
	float totalDonutPrice = 0.0; 	// Total Cost (declaired at end)
	const float donut_cost = 0.99f; // Given donut Cost
	const float tax = 1.085f; 			// Given tax cost
	
	/* 	the line below will allow floating point amounts to display
		two numbers after the decimal point.  (it will make amounts pretty) */
	cout <<	setprecision(2) << fixed << showpoint; 
	cout << "\n\nPlease input the number of dounts purchased:  ";
	
	//	Fill in the	input statement to bring in	the	quantity of dounts.
	cin >> donuts_purchased; // Ask consol/user for how many donuts the consumer bought.
	
	//	Fill in the assignment statement to determine the total bill.
	totalDonutPrice = donuts_purchased * donut_cost * tax; // This figures out the total cost.
	
	//	Fill in	the	output statement to print total	bill as shown in sample output
	cout << "Your total bill is $" << totalDonutPrice << endl; // This displays the consol the price of the donuts.
	
	return 0;
}