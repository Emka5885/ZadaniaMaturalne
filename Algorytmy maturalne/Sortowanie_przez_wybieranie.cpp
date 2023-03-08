/*
#include <iostream>
#include <vector>

void selectionSort(std::vector<int>& vec, int n)
{
    for (int i = 0, j = n - 1; i <= j; ++i, --j)
    {
        for (int k = i; k <= j; ++k)
        {
            int min = vec[i];
            int max = vec[j];
            if (min > vec[k])
            {
                std::swap(vec[i], vec[k]);
            }
            if (max < vec[k])
            {
                std::swap(vec[j], vec[k]);
            }
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

    selectionSort(vec, n);
    std::cout << "Sorted vector: ";
    for (const auto& element : vec)
    {
        std::cout << element << " ";
    }
    std::cout << "\n";

	return 0;
}
*/