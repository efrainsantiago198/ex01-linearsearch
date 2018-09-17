/**
* CS V15 Data Structures and Algorithms
* CRN: 73042
* Assignment:linearsearch
*
* Statement of code ownership: I hereby state that I have written all of this
* code and I have not copied this code from any other person or source.
*
* efrain santiago
*/
#include <iostream>
#include "linearsearch.h"

using edu::vcccd::vc::csv15::find;
using std::cout;
using std::endl;

int main(int argc, char *argv[]) {

	int my_array[] = { 3, 1, 2 };
	int64_t index = find(1, my_array, 3); //find '1' in array with the size of 3 -- Should be index: 1
	cout << "at index: " << index << std::endl;


	double doubles[] = { 2.3, 2.6, 6.5, 1.6, 5.2, 6.3, 9.8, 1.0 };
	index = find(1.6, doubles, 8); //find '1' in array with the size of 8 -- Should be index: 3
	cout << "at index: " << index << std::endl;

}