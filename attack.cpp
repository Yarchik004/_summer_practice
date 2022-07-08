#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "board.h"

void board()
{
	int boa[max][max]{
		{11, 12, 13, 14, 15, 16, 17, 18},
		{21, 22, 23, 24, 25, 26, 27, 28},
		{31, 32, 33, 34, 35, 36, 37, 38},
		{41, 42, 43, 44, 45, 46, 47, 48},
		{51, 52, 53, 54, 55, 56, 57, 58},
		{61, 62, 63, 64, 65, 66, 67, 68},
		{71, 72, 73, 74, 75, 76, 77, 78},
		{81, 82, 83, 84, 85, 86, 87, 88}
	};
	printf("Chess board\n");
	printf("First num is X coordinate, second is Y\n");
	for (int i = 0; i < max; i++)
	{
		for (int j = 0; j < max; j++)
		{
			printf("%3d", boa[i][j]);
		}
		printf("\n");
	}
}

void attack(int qX, int qY, int oX, int oY)
{
	if (qX == oX && qY == oY)
	{
		printf("Queen and the figure can`t be at the same place\n");
	}
	if (qX == oX || qY == oY || abs(qX - oX) == abs(qY - oY))
	{
		printf("Queen can attack this figure\n");
	}
	else
	{
		printf("Queen can`t attack this figure");
	}
}