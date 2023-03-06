/*
#include <iostream>
#include <vector>

int Fibonacci(int n)
{
	std::vector<int> fib(n + 1, 0);
	fib[0] = 0;
	fib[1] = 1;

	for (int i = 2; i <= n; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
	}

	return fib[n];
}

int main()
{
	int n;
	std::cout << "n: "; std::cin >> n;

	std::cout << "The " << n << "th Fibonacci number is " << Fibonacci(n) << "\n";

	return 0;
}
*/