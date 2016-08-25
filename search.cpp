/*********************************************************************
** Program Filename : Search CPP
** Author : Tyler Forrester
** Date : 8/ 3 / 2016
* * Description : Searches Integer Arrays
** Input : Integer Arrays  and needles
** Output : Booleans
** Citations :
********************************************************************/

#include "search.hpp"

/*********************************************************************
** Function:  Binary()
** Description: Fast Search Algorithm usess 
** Parameters: an int array, a length of an array , a int needle
** Pre-Conditions: a sorted array with a length and a needle and a bubble sort file
** Post-Conditions: some code that wants something to be found
** Citation: https://www.khanacademy.org/computing/computer-science/algorithms/binary-search/a/implementing-binary-search-of-an-array
** Pseudocode
1. Let min = 0 and max = n-1
2. If min > max break "Integer not found"
3. Else: Compute guess as the average of max and min rounded down (so that it is an integer)
4. If array[guess]  = target, then stop. You found it! Return guess
5. If the guess was too low, that is, array[guess] < target, then set min = guess + 1
6. Else guess was too high  max = guess - 1
7. Start again at step Two;

*********************************************************************/

bool Search::binary(int * searchArr, int length, int needle) {
	Sort sort = Sort(); 
	int * searchArr1 = sort.bubble(searchArr, length); // calls bubble to sort file
	int min = 0; 
	int max = length - 1;

	while (!(min > max)) {

		int guess = (min + max) / 2;

		if (searchArr1[guess] == needle) {

			return true;

		}
		else if (searchArr1[guess] < needle) {

			min = guess + 1;


		}

		else {

			max = guess - 1;


		}


	}

	return false;



}


/*********************************************************************
** Function: linear
** Description: brute force search through array
** Parameters: int array, int length, int needle
** Pre-Conditions: an int array, and a serach value
** Post-Conditions: something that needs to know if value exists
** Citation: http://www4.ncsu.edu/~aszanto/MA522/HW1Sol.pdf
** Pseudocode
1. for i = 0 until i = length - 1
2. if array[i] = target
a. return true
3. If for loop finishes
return false
*********************************************************************/


bool Search::linear(int * arr, int length, int num) {

	for (int i = 0; i < length; i++)
	{
		if (arr[i] == num) {

			return true;
		}
	}

	return false;


}