/*
#include <iostream>
#include <vector>

int horner(int degree, const std::vector<int>& coefficient, int& x)
{
	if (degree == 0)
	{
		return coefficient[0];
	}

	return x * horner(degree - 1, coefficient, x) + coefficient[degree];
}

int main()
{
	int degree, argument;
	std::cout << "Degree: "; std::cin >> degree;


	std::vector<int> coefficient;
	for (int i = 0; i <= degree; i++)
	{
		std::cout << "Coefficient standing at a power " << degree - i << ": ";
		int helper;
		std::cin >> helper;
		coefficient.push_back(helper);
	}

	std::cout << "Argument: "; std::cin >> argument;

	std::cout << "W(" << argument << ") = " << horner(degree, coefficient, argument) << "\n";

	return 0;
}
*/