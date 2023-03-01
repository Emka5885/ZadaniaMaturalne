/*
#include <iostream>
#include <cmath>

void primeFactors(int n)
{
	while (n % 2 == 0)
	{
		std::cout << " 2";
		n = n / 2;
	}

	for (int i = 3; i <= sqrt(n); i += 2)
	{
		while (n % i == 0)
		{
			std::cout << " " << i;
			n = n / i;
		}
	}

	if (n > 2)
	{
		std::cout << " " << n;
	}
}

int main()
{
	int num;
	std::cout << "Number: "; std::cin >> num;

	std::cout << "Prime factors of this number:";
	primeFactors(num);

	std::cout << "\n";

	return 0;
}
*/