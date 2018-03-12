/*******************************************************************************
* AUTHORS		: Zac Campos & Sebastian Hooshmand
* STUDENT ID	: 1058476
* LAB #15		: Pocket Money
* CLASS			: CS1A
* SECTION		: MW 8am
* DUE DATE		: 3/12/18
******************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

/*******************************************************************************
* POCKET MONEY
* -----------------------------------------------------------------------------
* This program receives the pocket money left over from the previous 
*	week and the amount spent in the current week from the user and
*	calculates how much pocket money is remaining.
* -----------------------------------------------------------------------------
* INPUT:
* 		<The user's name, the amount remaining from the previous week, and the
* 		amount spent this week.>
*
* OUTPUT:
* 	<The user's name and the amount of pocket money remaining.>
******************************************************************************/


int main()
{
	/***************************************************************************
	* CONSTANTS
	* -------------------------------------------------------------------------
	* OUTPUT - USED FOR CLASS HEADING AND ALIGNMENT
	* -------------------------------------------------------------------------
	* PROGRAMMERS	: Programmers' Name
	* CLASS			: Students' Course
	* SECTION		: Class Days and Times
	* LAB_NUM		: Lab Number (specific to this lab)
	* LAB_NAME		: Title of the Lab
	**************************************************************************/

	const char	PROGRAMMERS[]		= "Zac Campos & Sebastian Hooshmand";
	const char	CLASS[]			= "CS1A";
	const char	SECTION[]		= "MW: 8am";
	const int	LAB_NUM			= 15;
	const char	LAB_NAME[]		= "Pocket Money";
	const float	ALLOWANCE		= 20.00;
	const int	ALIGN			= 35;

	// Input and calculation variables
	char	name[30];				// This is for the user's name
	float	previousWeek		= 0;		// How much the user spent last week
	float	amountSpent		= 0;		// How much the user spent this week
	float	remainder		= 0;		// The amount left from this week

	// OUTPUT - Class Heading
	cout << left;
	cout << "***************************************************\n";
	cout << "*  PROGRAMMED BY : " << PROGRAMMERS << endl;
	cout << "*  " << setw(14) << "CLASS" << ": " << CLASS << endl;
	cout << "*  " << setw(14) << "SECTION" << ": " << SECTION << endl;
	cout << "*  LAB #" << setw(9) << LAB_NUM << ": " << LAB_NAME << endl;
	cout << "***************************************************\n\n";
	cout << right;

	/***************************************************************************
	* INPUT - Takes in the users name, the amount remaining from the 
	*			previous week, and the amount spent this week.
	**************************************************************************/
	cout << left;
	cout << setw(ALIGN) << "What is your name?:";
	cin.getline (name, 30);

	cout << setw(ALIGN) << "How much is left from last week?:";
	cin  >> previousWeek;

	cout << setw(ALIGN) << "How much have you spent?:";
	cin  >> amountSpent;

	cout << endl;
	
	/***************************************************************************
	* PROCESSING - Calculates the amount remaining from the two weeks
	**************************************************************************/
	remainder = (ALLOWANCE + previousWeek) - amountSpent;

	/***************************************************************************
	* OUTPUT - Prompts the user with 'hello' and their name and how much
	*			pocket money they have left.
	**************************************************************************/
	cout << "Hello " << name << "!" << endl;
	cout << fixed << setprecision(2);
	cout << "You now have $ " << remainder << " left.";
	
	cout << right;
	
	return 0;
}
