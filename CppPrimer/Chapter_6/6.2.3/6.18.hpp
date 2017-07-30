#ifndef SIX_EIGHTEEN_H
#define SIX_EIGHTEEN_H

#include <vector>

class matrix;

/*!
	\brief Determines if two matrix objects are equal.
	\return Returns true if the matrixes are equal, false otherwise.
 */
bool compare(const matrix &val1, const matrix &val2);

/*!
	\brief Changes the value of an element from a vector of ints.
	\param newVal - the value to be assigned.
	\param member - iterator pointing to the element to be changed.
	\return Iterator pointing to the element that was changed.
 */
std::vector<int>::iterator change_val(int newVal, std::vector<int>::iterator member);

#endif // !SIX_EIGHTEEN_H
