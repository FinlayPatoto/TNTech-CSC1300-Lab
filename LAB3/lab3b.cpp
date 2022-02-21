/*******************************************************************
	Title: 		lab3b.cpp
	Author: 	Sherif Abdelfattah, MODIFIED BY Finlay Patoto
	Date:  		February 06, 2022, MODIFIED ON February 07, 2022
	Purpose: 	Practice with random numbers, string, and branching
********************************************************************/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	//(Given Code)
	int randomNum;
	string name, anotherName, location, food;
	string original;
	
	//Sets a random seed based on the computers time.
	srand(time(0));
	
	//(Given Code) But I added a "\n"  for easier reading.
	cout << "\nGood afternoon!  Please enter the following information:\n\n";
	cout << "YOUR NAME:  ";
	getline(cin, name);
	cout << "ANOTHER PERSON\'s NAME:  ";
	getline(cin, anotherName);
	cout << "LOCATION NAME:  ";
	getline(cin, location);
	cout << "FOOD NAME:  ";
	getline(cin, food);
	
	cout << endl;
	
	//Generates a random number from 1-2 for selecting which out put to use.
	randomNum = (rand() % 2) + 1;
	
	//This what the value of ranomNum is and sets original to the respective line. 
	if (randomNum == 1)
	{
		original = name + ", fortunately you can eat " + food + " in the " + location + ". Watch out, " + anotherName + " wants" 
			 + "\nto take a bite. Have a happy meal.";
	}
	else if (randomNum == 2)
	{
		original = name + ", unfortunately you cannot eat " + food + "in the " + location + ". You are lucky " + anotherName + " will not" 
 			 + "\ntake a bite. You can eat elsewhere.";
	}
	
	//(Given Code)
	cout << original;
	
	
	
	cout << endl;
	return 0;
}