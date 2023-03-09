/*
#include <iostream>
#include <vector>

void merge(std::vector<int>& vec, int left, int mid, int right)
{
    std::vector<int> temp(vec.size());

    int i = left, j = mid + 1, k = left;

    while (i <= mid && j <= right)
    {
        if (vec[i] <= vec[j])
        {
            temp[k++] = std::move(vec[i++]);
        }
        else
        {
            temp[k++] = std::move(vec[j++]);
        }
    }

    while (i <= mid)
    {
        temp[k++] = std::move(vec[i++]);
    }

    while (j <= right)
    {
        temp[k++] = std::move(vec[j++]);
    }

    for (k = left; k <= right; k++)
    {
        vec[k] = std::move(temp[k]);
    }
}

void mergeSort(std::vector<int>& vec, int left, int right)
{
    if (right <= left)
    {
        return;
    }

    int mid = (right + left) / 2;

    mergeSort(vec, left, mid);
    mergeSort(vec, mid + 1, right);

    merge(vec, left, mid, right);
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

    mergeSort(vec, 0, n-1);
    std::cout << "Sorted vector: ";
    for (const auto& element : vec)
    {
        std::cout << element << " ";
    }
    std::cout << "\n";

	return 0;
}
*/