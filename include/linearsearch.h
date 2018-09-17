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
#ifndef EX01_LINEARSEARCH_LINEARSEARCH_H
#define EX01_LINEARSEARCH_LINEARSEARCH_H

#endif //EX01_LINEARSEARCH_LINEARSEARCH_H

#include <cstdint>

namespace edu {
	namespace vcccd {
		namespace vc {
			namespace csv15 {

				template <class T>
				int64_t find(const T& value, T array[], size_t size) {
					if (array == NULL) return -1;
					// put your code here
					for (int i = 0; i<size; i++)
						if (value == array[i]) {
							//std::cout << value << " Found" << "\n";
							return i;
						}
					//std::cout << value << " Not found" << "\n";
					return -1;
				}
				//test
			}
		}
	}
}