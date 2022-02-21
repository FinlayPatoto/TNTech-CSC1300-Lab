/*******************************************************************
	Title: 		lab3c.cpp
	Author: 	Unknown, MODIFIED BY Finlay Patoto
	Date:  		February 06, 2022, MODIFIED ON February 07, 2022
	Purpose: 	This program calculates the current of a circuit.
********************************************************************/

#include <iostream>
#include<string>
using namespace std;

int main ()
{
	//Values
	const float voltage = 5.95487;
	string fullName;
	double current;
	double resistance;
	
	//Asks for resistance in kilo-ohms.
	cout << "\n\nWhat is the resistance in Kilo-ohms of your circuit?\n";
	cin >> resistance;
	cin.ignore();
	
	//Asks for users name
	cout << "\n\nWhat is your first & last name?\n";
	getline(cin, fullName);

	// Calculates the current.
	current = voltage / resistance;
	
	// Display the current. Fixed errors that were arising.
	cout << "\n\nHello, " << fullName
		 << "! The current of your circuit is: " << current << " Millie-amp." << endl;
	
	return 0;
}
