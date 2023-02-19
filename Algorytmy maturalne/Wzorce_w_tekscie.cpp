#include <iostream>

int find(std::string& text, std::string& pattern)
{
    int found = text.find(pattern);
    while (found != std::string::npos)
    {
        return found;
    }
    return -1;
}

int main()
{
    std::string text, pattern;
    std::cout << "Text: "; std::cin >> text;
    std::cout << "Pattern: "; std::cin >> pattern;

    int index = find(text, pattern);
    if (index != -1)
    {
        std::cout << "Pattern found at index " << index << "\n";
    }
    else
    {
        std::cout << "Pattern not found\n";
    }

	return 0;
}