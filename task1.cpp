#include <iostream>
#include <time.h>

#define CIN std::cin >>
#define COUT std::cout <<
#define MAIN void main()\
{
#define TRANS_MATRIX  transposeMatrix
#define RANDOM_MATRIX  willRandomMatrix
#define PRINT  printMatrix
#define VALUE_IN (int** matrix, int& horizontal, int& vertical)
#define VALUE_OUT (matrix, horizontal, vertical);
#define FOR_HORIZONTAL for (int j = 0; j < horizontal; j++) \
{
#define FOR_VERTICAL for (int i = 0; i < vertical; i++) \
{
#define DELETE_MATRIX  FOR_VERTICAL\
		delete[] matrix[vertical];\
	}\
	delete matrix;

int** TRANS_MATRIX VALUE_IN
{
	int vertical1 = horizontal;
	int horizontal1 = vertical;
	int** matrix1 = new int*[vertical1];
	for (int i = 0; i < vertical1; i++)
	{
		matrix[i] = new int[horizontal1];
	}
	FOR_VERTICAL
		FOR_HORIZONTAL
			matrix1[j][i] = matrix[i][j];
		}
	}
	DELETE_MATRIX
		horizontal = horizontal1;
		vertical = vertical1;
		return matrix1;
}

void RANDOM_MATRIX VALUE_IN
{
	srand(time(NULL));
	FOR_VERTICAL
		FOR_HORIZONTAL
			matrix[i][j] = rand() % 100;
		}
	}
}

void PRINT VALUE_IN
{
	FOR_VERTICAL
		FOR_HORIZONTAL
			COUT matrix[i][j];
		}
		COUT std::endl;
	}
}

MAIN
	int horizontal, vertical;
	COUT "enter vertical: ";
	CIN vertical;
	COUT "enter horizontal: ";
	CIN horizontal;
	int** matrix = new int*[vertical];
	FOR_VERTICAL
		matrix[vertical] = new int[horizontal];
	}
	int menu = 0;
	RANDOM_MATRIX VALUE_OUT
	do
	{
		COUT "will random matrix = 1\ntranspose matrix = 2\nprint matrix = 3\nexit = 0\nenter: ";
		CIN menu;
		switch (menu)
		{
		case 1: RANDOM_MATRIX VALUE_OUT
			break;
		case 2: matrix = TRANS_MATRIX VALUE_OUT
			break;
		case 3: PRINT VALUE_OUT
			break;
		default: menu = 0;
			break;
		}
	} while (menu != 0);

	DELETE_MATRIX
}

/*Реализовать программу транспонирования прямоугольной матрицы MxN. Функцию транспонирования реализовать в виде макроса.
Размерность матрицы получить необходимо от пользователя.
Значения в матрице задать с помощью генератора псевдослучайных чисел (rand()).*/