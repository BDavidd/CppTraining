#ifndef SIX_TWO_HPP
#define SIX_TWO_HPP

#include <string>

/*!
	\brief Returns a dummy string.
	\return A hard-coded string.
 */
std::string f();

/*!
	\brief Prints a number on standard output.
	\param i - the number to be printed.
 */
void f2(int i);

/*!
	\brief Adds two numbers.
	\param v1 - first operand
	\param v2 - second operand
	\return The sum of the two numbers.
 */
int calc(int v1, int v2);

/*!
	\brief Squares a number.
	\param x - the number to be squared
	\return x squared.
 */
double square(double x);

#endif // !SIX_TWO_HPP
