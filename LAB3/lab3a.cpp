/*******************************************************************
	Title: 		lab3a.cpp
	Author: 	Finlay Patoto
	Date:  		February 07, 2022
	Purpose: 	Happy Summer resort calculator for guests costs.
********************************************************************/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	//Variables 
	string name;
	int numNights;
	int numPeople;
	float nightCost;
	float cost;
	const float perNightCost = 199.99;

	//Welcoming user and asking for their name .
	cout << "\nWelcome to Happy Summer Resort!" << endl;
	cout << "\nWhat is your name? ";
	getline(cin, name);

	//Informs the user of the cost of each night and asks for how many nights they are staying.
	cout << "\nThe night cost is $" << perNightCost << "." 
		 << "\n\nHow many nights do you want to stay?  ";
	cin >> numNights;

	//Shows user the discounts and asks them how many people are staying at the hotel.
	cout << "\n\tNumber of people" << setw(13) << "Discount"
		 << "\n\t5-10"<< setw(20) << "10%"
		 << "\n\t11-20" << setw(19) << "15%"
		 << "\n\t21-30" << setw(19) << "20%"
		 << "\n\t31 or more" << setw(14) << "25%";

	cout << "\n\n\n" << name << ", how many people are in your group?  ";
	cin >> numPeople;

	//Makes sure numPeople is not invalid.
	if(numPeople <= 0)
	{
		cout << "Invalid input: Please run the program again and enter a non-negative integer";
		return 0;
	}
	else
	{
		//If numPeople is not invalid, it will calculate the price per night.
		if(numPeople < 5)
		{
			nightCost = perNightCost;
		}
		else if((numPeople >= 5) && (numPeople <= 10))
		{
			nightCost = perNightCost * 0.90;
		}
		else if((numPeople >= 11) && (numPeople <= 20))
		{
			nightCost = perNightCost * 0.85;
		}
		else if((numPeople >= 21) && (numPeople <= 30))
		{
			nightCost = perNightCost * 0.80;
		}
		else if((numPeople >= 31))
		{
			nightCost = perNightCost * 0.75;
		}
	}

	//Calculates the total cost.
	cost = nightCost * numNights;

	//Gives the user a summery of billers name, cost per night, and total cost.
	cout <<	setprecision(2) << fixed << showpoint; 
    cout << "\n\n" << setfill('-') << setw(40) << " " << setfill(' ') << endl;
	cout << "BILL FOR:" << setw(16) << name << endl;
	cout << "DISCOUNTED COST:"<< setw(2)<< "$" << nightCost << " (per night)" << endl;
	cout << "TOTAL COST:" << setw(7) << "$" << cost << endl;

	//Ends program
	return 0;
}