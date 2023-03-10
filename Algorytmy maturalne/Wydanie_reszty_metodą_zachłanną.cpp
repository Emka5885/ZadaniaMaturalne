/*
#include <iostream>
#include <vector>

int main()
{
	int toIssue;
	std::cout << "To issue: "; std::cin >> toIssue;

	int howMany;
	std::cout << "How many denominations do you want to enter? : "; std::cin >> howMany;
	std::vector<int> coins;
	std::cout << "Enter these denominations: ";
	for (int i = 0; i < howMany; i++)
	{
		int coin;
		std::cin >> coin;
		coins.push_back(coin);
	}

	std::vector<int> coinsUsed;
	while (toIssue > 0)
	{
		int nominal = 0;
		for (int i = 0; i < howMany; i++)
		{
			if (toIssue >= coins[i] && coins[i] > nominal)
			{
				nominal = coins[i];
			}
		}
		toIssue -= nominal;
		
		coinsUsed.push_back(nominal);
	}

	std::cout << "You will spend the rest in " << coinsUsed.size() << " coins. These coins are:";
	for (const auto& coin : coinsUsed)
	{
		std::cout << " " << coin;
	}
	std::cout << "\n";

	return 0;
}
*/