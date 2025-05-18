/**
* File Name: IE8RemovalTool.cpp
* Created By: Eric Hooks
* Date of Creation: 1/21/2013
* Purpose: To remove IE8 from a system.
*
* Microsoft, Windows and Internet Explorer are property of the Microsoft Corporation.
* All other tools are property of thier respective owners.
*/

//Preprocessor Directive
#include <iostream>
#include <cstdlib>

using namespace std;

//Function Prototypes
void pause();

/**
* Main Function
*/
int main()
{
	//Setup the environment
	system("title Internet Explorer 8 Removal Tool");
	system("color 3f");

	//Output message to the user
	cout << "Attempting to remove Internet Explorer 8." << endl;
	cout << "If you didn't run this as Administrator, I would suggest closing this window" << endl;
	cout << "and running as Administrator now.  Press Enter if you wish to proceed...";

	//Pause the program
	pause();

	//Remove IE8
	cout << endl << "Now removing Internet Explorer 8." << endl;
	system("%systemroot%\\ie8\\spuninst\\spuninst.exe /quiet");

	//Output to the user
	cout << endl << "Done. Internet Explorer 8 should have been removed from the system." << endl;
	cout << "The system must now reboot.  Please close any open programs and" << endl 
	<< "press Enter to continue." << endl;
	pause();

	//Reboot the system
	cout << "Rebooting. Please Wait..." << endl;
	system("shutdown -r -t 0");

	//Return 0
	return 0;
}

//Function to pause the program
void pause()
{
	cin.get();
}
