/*
Gra w ¿ycie zosta³a wymyœlona w 1970 roku przez Johna Conwaya.
Rozpatrujemy wariant, w którym plansza sk³ada siê z komórek rozmieszczonych obok siebie
na prostok¹tnej siatce o wymiarach n × m, w której numeracja wierszy i kolumn zaczyna siê
od 1. Ka¿da komórka mo¿e byæ w jednym z dwóch stanów: ¿ywa ”X” lub martwa ”.”.
Przyjmijmy, ¿e komórki z prawej krawêdzi siatki s¹siaduj¹ z komórkami z lewej krawêdzi
siatki, a komórki z górnego wiersza s¹siaduj¹ z komórkami dolnego wiersza siatki. Ka¿da
komórka ma 8 s¹siadów, po³¹czonych z ni¹ bokiem lub wierzcho³kiem.
Uk³ad komórek podlega ewolucji. W nastêpnym pokoleniu bêd¹ ¿ywe tylko te komórki,
które w bie¿¹cym pokoleniu spe³niaj¹ jeden z dwóch warunków:
• Komórka jest ¿ywa i ma dwóch lub trzech ¿ywych s¹siadów (inaczej umiera
z samotnoœci lub na skutek zbyt du¿ego zagêszczenia).
• Komórka jest martwa, ale ma dok³adnie trzech ¿ywych s¹siadów.
Uwaga:
Planszê stanu komórek w nowym pokoleniu mo¿na wyznaczyæ, tylko je¿eli ma siê kompletne
dane z poprzedniego pokolenia.

Przyk³ad:
Pierwsze pokolenie:
. . . . . . . . .
. . . . . . . . .
. . . X X X . . X
. . . X X X . . X
. . . . . . . . X
. . . . . . . . .
. . . . . . . . .

Drugie pokolenie:
. . . . . . . . .
. . . . X . . . .
. . . X . X . . .
X . . X . X . X X
. . . . X . . . .
. . . . . . . . .
. . . . . . . . .

Dla przyk³adu – w drugim pokoleniu komórka bêd¹ca w trzecim wierszu i dziewi¹tej
kolumnie jest martwa i ma trzech ¿ywych s¹siadów.
W pliku gra.txt zapisany jest uk³ad komórek na siatce o wymiarach: 12 wierszy
i 20 kolumn – rozmieszczenie ¿ywych i martwych komórek w pierwszym pokoleniu. Ka¿dy
wiersz siatki jest zapisany w osobnym wierszu pliku.
Uwaga:
Dla przyk³adu z pliku – w jedenastym pokoleniu – komórka w pierwszym wierszu i dziesi¹tej
kolumnie jest martwa i ma trzech ¿ywych s¹siadów.
Napisz program, który da odpowiedzi do poni¿szych poleceñ. Ka¿d¹ odpowiedŸ zapisz
w pliku wyniki_5.txt, poprzedŸ j¹ numerem zadania.
*/

//#5.1
//Podaj liczbê ¿ywych s¹siadów dla komórki w drugim wierszu i dziewiêtnastej kolumnie w trzydziestym siódmym pokoleniu.

//#5.2
//Podaj liczbê ¿ywych komórek w drugim pokoleniu tego uk³adu.

//#5.3
//W którym pokoleniu (sprawdzamy maksymalnie do 100) uk³ad ¿ywych i martwych komórek siê ustali(w bie¿¹cym pokoleniu jest identyczny jak w poprzednim) ? Podaj, które to pokolenie oraz liczbê ¿ywych komórek w tym pokoleniu.

/*
#include <iostream>
#include <fstream>
#include <array>
#include <string>

#define n 20
#define m 12

void nextGeneration(std::array<std::array<char, n>, m>& arr)
{
	std::array<std::array<char, n>, m> newArr = {};

	for (int j = 0; j < m; j++)
	{
		for (int i = 0; i < n; i++)
		{
			int neighbors = 0;
			if (arr[(j - 1 + m) % m][(i - 1 + n) % n] == 'X')
			{
				neighbors++;
			}
			if (arr[(j + 1) % m][i] == 'X')
			{
				neighbors++;
			}
			if (arr[j][(i + 1) % n] == 'X')
			{
				neighbors++;
			}
			if (arr[j][(i - 1 + n) % n] == 'X')
			{
				neighbors++;
			}
			if (arr[(j - 1 + m) % m][i] == 'X')
			{
				neighbors++;
			}
			if (arr[(j - 1 + m) % m][(i + 1) % n] == 'X')
			{
				neighbors++;
			}
			if (arr[(j + 1) % m][(i - 1 + n) % n] == 'X')
			{
				neighbors++;
			}
			if (arr[(j + 1) % m][(i + 1) % n] == 'X')
			{
				neighbors++;
			}


			if (((neighbors == 2 || neighbors == 3) && arr[j][i]=='X') || (neighbors == 3 && arr[j][i] == '.'))
			{
				newArr[j][i] = 'X';
			}
			else
			{
				newArr[j][i] = '.';
			}
		}
	}

	arr = newArr;
}

int main()
{
	std::array<std::array<char, n>, m> arr1;
	std::array<std::array<char, n>, m> arr2;
	std::array<std::array<char, n>, m> arr3;

	std::ifstream file("C://Users//EMI//source//repos//Emka5885//ZadaniaMaturalne//Arkusze maturalne//Stara podstawa//2016//gra.txt");

	if (file.is_open())
	{
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				file >> arr1[i][j];
			}
		}
		file.close();
	}
	else
	{
		std::cout << "Failed to open file.\n";
	}
	arr2 = arr1;
	arr3 = arr1;

	//5.1
	for (int i = 0; i < 36; i++)
	{
		nextGeneration(arr1);
	}

	int liveNeighbors = 0;
	if (arr1[0][18] == 'X')
	{
		liveNeighbors++;
	}
	if (arr1[2][18] == 'X')
	{
		liveNeighbors++;
	}
	if (arr1[1][17] == 'X')
	{
		liveNeighbors++;
	}
	if (arr1[1][19] == 'X')
	{
		liveNeighbors++;
	}
	if (arr1[0][19] == 'X')
	{
		liveNeighbors++;
	}
	if (arr1[2][19] == 'X')
	{
		liveNeighbors++;
	}
	if (arr1[0][17] == 'X')
	{
		liveNeighbors++;
	}
	if (arr1[2][17] == 'X')
	{
		liveNeighbors++;
	}



	//5.2
	nextGeneration(arr2);

	int liveNeighbors2 = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (arr2[i][j] == 'X')
			{
				liveNeighbors2++;
			}
		}
	}



	//5.3
	bool test = true;
	int counter = 1;
	while (test)
	{
		counter++;

		std::array<std::array<char, n>, m> arr;
		nextGeneration(arr3);

		if (arr == arr3)
		{
			test = false;
		}

		if (counter == 100)
		{
			test = false;
		}
		arr = arr3;
	}

	int liveNeighbors3 = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (arr3[i][j] == 'X')
			{
				liveNeighbors3++;
			}
		}
	}

	std::ofstream output("C://Users//EMI//source//repos//Emka5885//ZadaniaMaturalne//Arkusze maturalne//Stara podstawa//2016//wyniki_5.txt");
	if (output.is_open())
	{
		output << "5.1 " << liveNeighbors << "\n";
		output << "5.2 " << liveNeighbors2 << "\n";
		output << "5.3 " << counter << "-" << liveNeighbors3 << "\n";
		output.close();
	}

	return 0;
}
*/