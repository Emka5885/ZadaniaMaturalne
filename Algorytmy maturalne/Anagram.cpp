/*
#include <iostream>

bool check(const std::string& a, const std::string& b)
{
	if (a.length() != b.length())
	{
		return false;
	}

	int count[128] = {};
	for (char c : a)
	{
		count[c]++;
	}
	for (char c : b)
	{
		count[c]--;
	}

	for (int i = 0; i < 128; i++)
	{
		if (count[i] != 0)
		{
			return false;
		}
	}

	return true;
}

int main()
{
	std::string a, b;
	std::cout << "text 1: "; std::cin >> a;
	std::cout << "text 2: "; std::cin >> b;

	if (check(a, b))
	{
		std::cout << "These words are anagrams\n";
	}
	else
	{
		std::cout << "These words are not anagrams\n";
	}

	return 0;
}
*/