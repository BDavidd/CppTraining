#include "swapInt.hpp"
#include <cctype>

void swapInt(int *param1, int *param2)
{
	int temp = *param1;
	*param1 = *param2;
	*param2 = temp;
}
