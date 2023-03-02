/*
#include <iostream>
#include <string>
#include <algorithm>

bool isPalindrome(std::string text)
{
	std::transform(text.begin(), text.end(), text.begin(), ::tolower);

	for (int i = 0; i < text.size() / 2; i++)
	{
		if (text[i] != text[text.size() - 1 - i])
		{
			return false;
		}
	}

	return true;
}

int main()
{
	std::string text;
	std::cout << "Text: "; std::getline(std::cin, text);

	if (isPalindrome(text))
	{
		std::cout << "This is a palindrome.\n";
		return 0;
	}

	std::cout << "This is not a palindrome.\n";
	return 0;
}
*/