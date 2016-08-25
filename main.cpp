
/*********************************************************************
** Program Filename: main Lab G
** Author: Tyler Forrester
** Date: 8/3/2016
** Description: A program that takes a text file full of integers and performs operations on them
** Input: File of Integers
** Output: File of Sorted Integers
** Citations:http://www.cplusplus.com/doc/tutorial/files/ and http://www.cplusplus.com/forum/general/76107/ and http://code.runnable.com/UpSpP5ymsslIAAFo/reading-a-file-into-an-array-for-c%2B%2B-and-fstream
********************************************************************/

#include <algorithm>
#include <iostream>
#include <fstream>
#include "InputValid.hpp"
#include "WriteFile.hpp"
#include "Sort.hpp"
#include "search.hpp"

using std::ifstream;
using std::cout;
using std::ofstream;
using std::endl;


int main() {
	
	
	void displayMenu();
	int getChoice(InputValid);
	void continueOn(InputValid);
	int choice;
	InputValid valid = InputValid();  // creates validation
	WriteFile file = WriteFile();
	Search search = Search(); 
	Sort sort = Sort(); 
	int length; 

	do {

		displayMenu();
		choice = getChoice(valid);
		length = 0; 


		switch (choice)
		{
		case 1: {

			int * searchArr = file.readInt(length);
			cout << "Please enter the number you would like to do a linear search for\n";
			if (search.linear(searchArr, length, valid.validateInt())) {

				cout << "The number was found in the file!!!\n" << endl;

			}

			else {

				cout << "Maybe you forgot add your number to the file\n" << endl;
			}
		
			delete [] searchArr;
			break; 
		}
		case 2: {
			int * searchArr = file.readInt(length);
			 sort.bubble(searchArr, length);
			file.writeInt(searchArr, length);
			break;
		}
		case 3: {
			int * searchArr = file.readInt(length);
			cout << "Please enter the number you would like to do a binary search for\n";
			if (search.binary(searchArr, length, valid.validateInt())) {

				cout << "The number was found in the file!!!" << endl;

			}

			else {

				cout << "Maybe you forgot add that number to the file\n" << endl;
			}

			delete [] searchArr;
			break;

			}
		}
	
			
			
	}while (choice != 4);

		return 0;
}



/*********************************************************************
** Function: displayMenu
** Description: Displays Menu of Options for Sum Game
** Parameters: void
** Pre-Conditions: Start of Program
** Post-Conditions: getChoice()
** Citation: Starting Out C++: Early Objects (8th Edition) Program 6-14 Gaddis P. 352
*********************************************************************/


void displayMenu() {


	cout << "\nWelcome to Lab 6\nPlease Select a Number\n\n";
	cout << "1. Use Linear Search on an int Array.\n";
	cout << "2. Bubblesort an array an output to file.\n";
	cout << "3. Use Binary Search on an int array.\n";
	cout << "4. Quit Program.\n\n";




}
/*********************************************************************
** Function:  getChoice
** Description: gets number of Choice
** Parameters:  InputValid
** Pre-Conditions: DisplayMenu()
** Post-Conditions: Switch and Array Entry
** Citation: Starting Out C++: Early Objects (8th Edition) Program 6-14 Gaddis P. 352
*********************************************************************/


int getChoice(InputValid valid) {

	int choice;
	choice = valid.validateInt();
	while (choice < 1 || choice > 4) {

		cout << "The only valid choices are 1 or 2. Please re-enter.\n";
		choice = valid.validateInt();

	}

	return choice;




}


/*********************************************************************
** Function:  continueOn
** Description: Pauses program after tasks
** Parameters: InputValid
** Pre-Conditions: switch case 1, case 2 and case 3
** Post-Conditions: displaymenu()
** Citation:
*********************************************************************/

void continueOn(InputValid valid) {
	char entry = '0';
	do {


		cout << "Please enter 'c' to continue.\n";
		entry = valid.validateChar();



	} while (entry != 'c');

}





