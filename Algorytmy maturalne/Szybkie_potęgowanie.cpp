/*
#include <iostream>
#include <cmath>

long long fastPower(long long x, unsigned int n)
{
    long long result = 1;
    while (n > 0)
    {
        if (n % 2 == 1)
        {
            result *= x;
        }
        x *= x;
        n /= 2;
    }
    return result;
}

int main()
{
	long long x;
	std::cout << "Enter the base: "; std::cin >> x;

	unsigned int n;
	std::cout << "Enter the exponent: "; std::cin >> n;
	
	std::cout << x << "^" << n << " = " << fastPower(x, n) << "\n";

	return 0;
}
*/