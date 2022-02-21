/*
	Title:  	lab_2d.cpp
	Author:		Finlay Patoto
	Date:		01/32/2022	
	Purpose:	This programs is for the use of a business to calculate
				the total days and amount of years their employees
				have been in quarentine.
*/

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	//define your variables here
	int employees_positive = 0;
	const int quarintineLenght = 21;
	float totalDaysQuarinteend = 0;
	float yearsQuarinteened = 0;

	//Asks consol for how many employees got Covid.
	cout << "\nHow many employees tested positive for Covid-19?  ";
	cin >> employees_positive;

	//Below calculates the total days and how many years have been quarintined.
	totalDaysQuarinteend = quarintineLenght * employees_positive;
	yearsQuarinteened = totalDaysQuarinteend / 365.0;

	//The line below displays the outputs of how many days the employees were quarintined and total years.
	cout << "\nThe employees went on quarantine for " << totalDaysQuarinteend << " days, which is " << yearsQuarinteened << " years." << endl;
	
	return 0;
}