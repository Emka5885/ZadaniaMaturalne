/*
Gra w �ycie zosta�a wymy�lona w 1970 roku przez Johna Conwaya.
Rozpatrujemy wariant, w kt�rym plansza sk�ada si� z kom�rek rozmieszczonych obok siebie
na prostok�tnej siatce o wymiarach n � m, w kt�rej numeracja wierszy i kolumn zaczyna si�
od 1. Ka�da kom�rka mo�e by� w jednym z dw�ch stan�w: �ywa �X� lub martwa �.�.
Przyjmijmy, �e kom�rki z prawej kraw�dzi siatki s�siaduj� z kom�rkami z lewej kraw�dzi
siatki, a kom�rki z g�rnego wiersza s�siaduj� z kom�rkami dolnego wiersza siatki. Ka�da
kom�rka ma 8 s�siad�w, po��czonych z ni� bokiem lub wierzcho�kiem.
Uk�ad kom�rek podlega ewolucji. W nast�pnym pokoleniu b�d� �ywe tylko te kom�rki,
kt�re w bie��cym pokoleniu spe�niaj� jeden z dw�ch warunk�w:
� Kom�rka jest �ywa i ma dw�ch lub trzech �ywych s�siad�w (inaczej umiera
z samotno�ci lub na skutek zbyt du�ego zag�szczenia).
� Kom�rka jest martwa, ale ma dok�adnie trzech �ywych s�siad�w.
Uwaga:
Plansz� stanu kom�rek w nowym pokoleniu mo�na wyznaczy�, tylko je�eli ma si� kompletne
dane z poprzedniego pokolenia.

Przyk�ad:
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

Dla przyk�adu � w drugim pokoleniu kom�rka b�d�ca w trzecim wierszu i dziewi�tej
kolumnie jest martwa i ma trzech �ywych s�siad�w.
W pliku gra.txt zapisany jest uk�ad kom�rek na siatce o wymiarach: 12 wierszy
i 20 kolumn � rozmieszczenie �ywych i martwych kom�rek w pierwszym pokoleniu. Ka�dy
wiersz siatki jest zapisany w osobnym wierszu pliku.
Uwaga:
Dla przyk�adu z pliku � w jedenastym pokoleniu � kom�rka w pierwszym wierszu i dziesi�tej
kolumnie jest martwa i ma trzech �ywych s�siad�w.
Napisz program, kt�ry da odpowiedzi do poni�szych polece�. Ka�d� odpowied� zapisz
w pliku wyniki_5.txt, poprzed� j� numerem zadania.
*/

//#5.1
//Podaj liczb� �ywych s�siad�w dla kom�rki w drugim wierszu i dziewi�tnastej kolumnie w trzydziestym si�dmym pokoleniu.

//#5.2
//Podaj liczb� �ywych kom�rek w drugim pokoleniu tego uk�adu.

//#5.3
//W kt�rym pokoleniu (sprawdzamy maksymalnie do 100) uk�ad �ywych i martwych kom�rek si� ustali(w bie��cym pokoleniu jest identyczny jak w poprzednim) ? Podaj, kt�re to pokolenie oraz liczb� �ywych kom�rek w tym pokoleniu.

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