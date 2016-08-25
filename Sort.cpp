/*********************************************************************
** Program Filename : Sort CPP
** Author : Tyler Forrester
** Date : 8/ 3 / 2016
* * Description : Sorst Arrays
** Input : Arrays
** Output : Sorted arrays
** Citations :
********************************************************************/



#include "Sort.hpp"

/*********************************************************************
** Function:  Bubblesort()
** Description: Sorts Array
** Parameters: integer array and size of array
** Pre-Conditions: an int array
** Post-Conditions: anything you want to with an sorted int array
** Citation: http://www.tutorialspoint.com/data_structures_algorithms/bubble_sort_algorithm.htm
** Pseudocode
1. for i = 0 until i = length -1 do
3. swapped = false
4. 	a. Let i = 0; 	b. Do the following length -1 times:
i. If A[i] > A[i+1], exchange A[i] and A[i+1]
ii. Add 1 to i
iii. swapped = true
5. else swapped = false and break

*********************************************************************/
int * Sort::bubble(int * searchArr, int length)
{ 
	// Input n 
	int n = length - 1;
	// Input a vector a values of A[0]..A[N - 1]

	// Let x = 0

	
	for (int j = 0; j < length; j++) {
		bool swapped = false;
		for (int i = 0; i < n; i++)
		{
			if (searchArr[i] > searchArr[i + 1]) {

				int temp = searchArr[i + 1];
				searchArr[i + 1] = searchArr[i];
				searchArr[i] = temp;
				swapped = true;
			}
		}
		if (!swapped) {

			break;
		}

	}

	

	/** for (int i = 0; i < length; i++)
	{
		cout << searchArr[i] << endl; for testing 
	} **/

	return searchArr;

}

