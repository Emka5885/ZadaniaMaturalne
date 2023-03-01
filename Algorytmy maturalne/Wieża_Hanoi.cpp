#include <iostream>

void hanoi(int num_disks, char source_rod, char auxiliary_rod, char destination_rod)
{
	if (num_disks == 0)
	{
		return;
	}
	hanoi(num_disks - 1, source_rod, destination_rod, auxiliary_rod);
	std::cout << "Move disk " << num_disks << " from rod " << source_rod << " to rod " << destination_rod << "\n";
	hanoi(num_disks - 1, auxiliary_rod, source_rod, destination_rod);
}

int main()
{
	int n;
	std::cout << "Num disks: "; std::cin >> n;

	hanoi(n, 'A', 'B', 'C');

	return 0;
}