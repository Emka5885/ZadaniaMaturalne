/*
#include <iostream>

unsigned int NWD(unsigned int a, unsigned int b)
{
	unsigned int result;
	while (b != 0)
	{
		std::swap(a, b);
		b = b % a;
	}
	result = a;
	return result;
}

unsigned int NWW(unsigned int a, unsigned int b)
{
	return a * b / NWD(a, b);
}

int main()
{
	unsigned int a, b;

	std::cout << "a: "; std::cin >> a;
	std::cout << "b: "; std::cin >> b;

	std::cout << "NWD = " << NWD(a, b) << "\n";
	std::cout << "NWW = " << NWW(a, b) << "\n";

	return 0;
}
*/