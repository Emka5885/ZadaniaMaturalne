/*
#include <iostream>
#include <vector>

void bubbleSort(std::vector<int>& vec, unsigned int n)
{
    bool swapped;
    for (int i = 0; i < n - 1; i++)
    {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (vec[j] > vec[j + 1])
            {
                std::swap(vec[j], vec[j + 1]);
                swapped = true;
            }
        }
        if (!swapped)
        {
            break;
        }
    }
}

int main()
{
    unsigned int n;
    std::cout << "Enter the size of the vector: "; std::cin >> n;
    std::vector<int> vec(n);
    std::cout << "Enter the elements of the vector: ";
    for (auto& element : vec)
    {
        std::cin >> element;
    }

    bubbleSort(vec, n);
    std::cout << "Sorted vector: ";
    for (const auto& element : vec)
    {
        std::cout << element << " ";
    }
    std::cout << "\n";

    return 0;
}
*/