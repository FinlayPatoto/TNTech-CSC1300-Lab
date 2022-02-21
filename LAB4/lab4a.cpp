/*
	Title:  	lab4a.cpp
	Author:		Finlay Patoto
	Date:		2/14/2022
	Purpose:	This program is to determine how well you
				do with your drinking diet. Determening if
				you should have more or less soda and more 
				water.
*/

#include <iostream>
using namespace std;

int main()
{	
	asda
	//Variables
	float waterConsumption = 0;
	float sodaConsumption = 0;

	//Asks user the amount of water consumed and sets waterConsumption to it.
	cout << "What is your daily water consumtion?" << endl
		 << "Daily water consumption in cups: ";
	cin >> waterConsumption;

	//Asks user the amount of soda consumed and sets sodaConsumption to it.
	cout << "\nWhat i syour daily soft drinks consumtion?" << endl
		 << "Dail soft drinks consumption in cups: ";
	cin >> sodaConsumption;

	//Find what answer to display to the user.
	if(waterConsumption <= 8 && sodaConsumption >= 2)
	{
		cout << "\nYou need to drink more water and less soft drinks" << endl;
	}
	else if(waterConsumption > 8 && sodaConsumption >= 2)
	{
		cout << "\nYou need to limit the amount of soday drinks you consume. It isn't the best way to manage\nhydration." << endl;
	}
	else if(waterConsumption < 8 && sodaConsumption < 2)
	{
		cout << "\nYou need to be more hydrated. Drink more water." << endl;
	}
	else if (waterConsumption > 8 && sodaConsumption < 2)
	{
		cout << "\nGood job. You managed it!" << endl;
	}

    return 0; // Ends program.
}