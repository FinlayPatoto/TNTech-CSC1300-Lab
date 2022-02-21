/*
	Title:  	lab_2c.cpp
	Author:		Finlay Patoto
	Date:		01/32/2022	
	Purpose:	This program calculates the average temperature of a given
				city over a span of three days.
*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
	//define your variables here
	string cityName = "";
	double tempMonday = 0.0;
	double tempTuesday = 0.0;
	double tempWednesday = 0.0;
	double averageTemp = 0.0;
	
	//Asking for city name 
	cout << "\nEnter the city\'s name: ";
	getline(cin,cityName);

	//Asking for temperature on Monday.
	cout << "Ener the temperature on Monday at " << cityName << ": ";
	cin >> tempMonday;

	//Asking for temperature on Tuesday.
	cout << "Ener the temperature on Tuesday at " << cityName << ": ";
	cin >> tempTuesday;

	//Asking for temperature on Wednesdady.
	cout << "Ener the temperature on Wednesday at " << cityName << ": ";
	cin >> tempWednesday;

	averageTemp = (tempMonday + tempTuesday + tempWednesday) / 3; // This line calculates the average temperature

	cout << "\n" << cityName << " has a temperature average of " << averageTemp << endl; // This line displays the average temperature to the console
	
	
	return 0;
}