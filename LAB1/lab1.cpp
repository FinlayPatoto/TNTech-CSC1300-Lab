/************************************************************************
 *	Title:  lab1.cpp    			           							*
 *	Author:  Finlay R. Patoto											*
 *	Date of Creation:  January 24, 2022									*
 *	Purpose: To convert kilometers per hour into miles               	*
 *		  per hour for the first lab of CSC1300-101.        	        *
 ************************************************************************/

#include <iostream>
using namespace std;
int main()
{
    float speed_in_kilometers; // This is the (float) used for the response from the user/consol.
    float speed_in_miles; // This is the (float) used for the answer after the conversion of (float)speed_in_kilometers into miles per hour.

    cout << "What is a speed in kilometers per hour (km/h)? (Enter the numarical vaule only)" << endl; // This asks the consol/user for an input.
    cin >> speed_in_kilometers; // Listens for consol/user input.

    speed_in_miles = speed_in_kilometers / 1.609344; // Converts (float)speed_in_kilometers into miles per hour and makes (float)speed_in_miles equal to it. 

    cout << "RESULT: " << speed_in_kilometers << " km/h speed in mph is " << speed_in_miles << " mph." << endl; // Tells the consol/user the answer of what speed in km/h is in mph.

    return 0; // Ends the program.
}