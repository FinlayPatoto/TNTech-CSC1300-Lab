/*
	Title:  	lab4c.cpp
	Author:		Finlay Patoto
	Date:		2/14/2022
	Purpose:	Checks users calories burnt and is they want to
				take the test again.
*/

#include <iostream>
using namespace std;

int main()
{
	//Variables
	char repeat = 'n';
	int calories = 0;

	while((repeat != 'y') || (calories < 200))
	{
		//Ask how many calories burnt.
		cout << "How many calories did you burn today? ";
		cin >> calories;

		//Asks for a letter input to quit.
		cout << "Enter the letter \'y\' if you want to quit." << endl;
		cin >> repeat;

		//Outputs the letter back to user.
		cout << "You letter you entered is " << repeat << endl;

		//Checks if calories is less than 200 to repeat loop.
		if(calories < 200)
		{
			cout << "Oh no! You need to workout more!" << endl;
		}
	}

    return 0;
}