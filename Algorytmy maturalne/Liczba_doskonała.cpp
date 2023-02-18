#include <iostream>

bool isPerfect(int num)
{
	if (num <= 0 || num % 2 != 0)
	{
		return false;
	}
	else
	{
		int sum = 1;
		for (int i = 2; i <= sqrt(num); i++)
		{
			if (num % i == 0)
			{
				if (i == num / i)
				{
					sum += i;
				}
				else
				{
					sum += i + num / i;
				}
			}
		}
		if (sum == num)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}

int main()
{
	int num;

	std::cout << "Number: "; std::cin >> num;

	if (isPerfect(num))
	{
		std::cout << num << " is a perfect number\n";
	}
	else
	{
		std::cout << num << " is not a perfect number\n";
	}

	return 0;
}