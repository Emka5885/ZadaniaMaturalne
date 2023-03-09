/*
#include <iostream>
#include <vector>
#include <algorithm>

void bucketSort(std::vector<double>& vec, int n)
{
    double max = *std::max_element(vec.begin(), vec.end());
    double min = *std::min_element(vec.begin(), vec.end());
    double range = (max - min) / n;

    std::vector<std::vector<double>> temp(n);

    for (int i = 0; i < n; i++)
    {
        double difference = (vec[i] - min) / range - int((vec[i] - min) / range);

        if (difference == 0 && vec[i] != min)
        {
            temp[int((vec[i] - min) / range) - 1].push_back(vec[i]);
        }
        else
        {
            temp[int((vec[i] - min) / range)].push_back(vec[i]);
        }
    }

    for (auto it = temp.begin(); it != temp.end(); ++it)
    {
        if (!it->empty())
        {
            std::sort(it->begin(), it->end());
        }
    }

    int k = 0;
    for (auto it = temp.begin(); it != temp.end(); ++it)
    {
        if (!it->empty())
        {
            for (const auto i : *it)
            {
                vec[k] = i;
                k++;
            }
        }
    }
}

int main()
{
    unsigned int n;
    std::cout << "Enter the size of the vector: ";
    std::cin >> n;
    std::vector<double> vec(n);
    std::cout << "Enter the elements of the vector: ";
    for (auto& element : vec)
    {
        std::cin >> element;
    }

    bucketSort(vec, n);
    std::cout << "Sorted vector: ";
    for (const auto& element : vec)
    {
        std::cout << element << " ";
    }
    std::cout << "\n";

    return 0;
}
*/