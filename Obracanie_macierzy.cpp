/*
#include <iostream>
#include <vector>

void transposeMatrix(std::vector<std::vector<int>>& matrix)
{
	for (int i = 0; i < matrix.size(); i++)
	{
		for (int j = i + 1; j < matrix[0].size(); j++)
		{
			std::swap(matrix[i][j], matrix[j][i]);
		}
	}
}

int main()
{
	int n, m;
	std::cout << "n: "; std::cin >> n;
	std::cout << "m: "; std::cin >> m;

	std::vector<std::vector<int>> matrix(n);
	for (int i = 0; i < n; i++)
	{
		std::cout << "Enter " << i + 1 << " line:\n";
		for (int j = 0; j < m; j++)
		{
			int num;
			std::cin >> num;
			matrix[i].push_back(num);
		}
	}
	
	std::cout << "\nInput:\n";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			std::cout << matrix[i][j] << " ";
		}
		std::cout << "\n";
	}

	transposeMatrix(matrix);
	std::cout << "\nOutput:\n";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			std::cout << matrix[i][j] << " ";
		}
		std::cout << "\n";
	}

	return 0;
}
*/