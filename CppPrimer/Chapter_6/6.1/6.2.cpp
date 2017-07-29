#include <iostream>
#include <string>

// The function should return a string.
std::string /*int*/ f()
{
	std::string s{ "hello" };

	return s;
}

// The function must have a return value.
void f2(int i)
{
	std::cout << "i: " << i << std::endl;
}

// The function parameters can't have the same name.
int calc(int v1, int v2 /*v1*/)
{
	return v1 + v2;
}

// The function's body must be wrapped between curly braces.
double square(double x)
{
	return x * x;
}

int main()
{
	std::cout << "f: " << f() << std::endl;
	f2(5);
	std::cout << "calc(1,2) = " << calc(1, 2) << std::endl;
	std::cout << "square(10.5) = " << square(10.5) << std::endl;

	return 0;
}
