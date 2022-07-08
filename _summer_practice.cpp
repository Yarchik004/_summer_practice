#include <stdio.h>
#include "board.h"

int main()
{
	int qX, qY, oX, oY;
	board();
	printf("Enter the coordinates of the queen\n");
	printf("The coordinates must be from 1 to 8\n");
	printf("qX = ");
	scanf_s("%d", &qX);
	if (qX < min || qX > max)
	{
		printf("qX coordinte is wrong, it must be from 1 to 8\n");
		return 0;
	}
	printf("qY = ");
	scanf_s("%d", &qY);
	if (qY < min || qY > max)
	{
		printf("qY coordinte is wrong, it must be from 1 to 8\n");
		return 0;
	}
	printf("Enter the coordinates of the figure\n");
	printf("oX = ");
	scanf_s("%d", &oX);
	if (oX < min || oX > max)
	{
		printf("oX coordinte is wrong, it must be from 1 to 8\n");
		return 0;
	}
	printf("oY = ");
	scanf_s("%d", &oY);
	if (oY < min || oY > max)
	{
		printf("oY coordinte is wrong, it must be from 1 to 8\n");
		return 0;
	}
	if (qX == oX && qY == oY)
	{
		printf("Queen and the figure can`t be at the same place\n");
		return 0;
	}
	attack(qX, qY, oX, oY);
	return 0;
}