#ifndef SIX_SEVENTEEN_HPP
#define SIX_SEVENTEEN_HPP

#include <string>

/*!
	\brief Determines whether a string contains uppercase characters.
	\param value - the string to be checked.
	\return True is the string contains uppercase characters, false otherwise.
 */
bool hasUppercase(const std::string &value);

/*!
	\brief Makes all the characters in a string lowercase.
	\param value - the string to be modified.
 */
void makeLowercase(std::string &value);

#endif // !SIX_SEVENTEEN_HPP
