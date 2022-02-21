/*
	Title:  	lab4b.cpp
	Author:		Finlay Patoto
	Date:		2/14/2022
	Purpose:	learning switch statements
*/

#include <iostream>
using namespace std;

int main()
{
	char grade;

	cout << "What grade will you earn on this lab assignment?" << endl;
	cout << "GRADE: ";
	cin >> grade;

	//Switch statement that checks answer.
	switch(grade)
	{
		case 'A':
			cout << "An A - you rock!!\n";
			break;
		case 'B':
			cout << "You got a B - good job.\n" ;
			break;
		case 'C':
			cout << "Earning a C is satisfactory.\n";
			break;
		case 'D':
			cout << "While D is passing, there is a problem.\n";
			cout << "You really didnt learn much.\n";
			break;
		case 'F':
		cout << "Oh BARF!  You failed - better luck next time.\n";
			break;
		default:
			cout << "You did not enter an A, B, C, D, or F.\n";
			break;
	}

    return 0;
}