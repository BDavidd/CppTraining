#include <iostream>

template <class T>
T absolute(T value)
{
	return (value >= 0) ? value : -value;
}

int main()
{
	std::cout << "absolute(-5): " << absolute(-5) << std::endl;
	std::cout << "absolute(-3.2): " << absolute(-3.2) << std::endl;

	return 0;
}
