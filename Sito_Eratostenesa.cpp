/*
#include <iostream>
#include <bitset>

void SieveOfEratosthenes(int n)
{
	std::bitset<500001> primes;
	primes.set();
	primes[0] = primes[1] = false;

	for (int i = 3; i * i <= n; i += 2)
	{
		if (primes[i])
		{
			for (int j = i * i; j <= n; j += 2 * i)
			{
				primes[j] = false;
			}
		}
	}

	std::cout << "2 ";
	for (int i = 3; i <= n; i += 2)
	{
		if (primes[i])
		{
			std::cout << i << ' ';
		}
	}
}

int main()
{
	int n;
	std::cout << "n: "; std::cin >> n;

	SieveOfEratosthenes(n);

	std::cout << "\n";

	return 0;
}
*/