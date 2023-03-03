/*
#include <iostream>
#include <cmath>

bool isPrimeNumber(int num)
{
	if (num < 2)
	{
		return false;
	}

	if (num % 2 == 0 && num > 2)
	{
		return false;
	}

	for (int i = 3; i <= sqrt(num); i+=2)
	{
		if (num % i == 0)
		{
			return false;
		}
	}

	return true;
}

int main()
{
	int num;
	std::cout << "Number: "; std::cin >> num;

	if (isPrimeNumber(num))
	{
		std::cout << "Is a prime number\n";
	}
	else
	{
		std::cout << "Is not a prime number\n";
	}

	return 0;
}
*/