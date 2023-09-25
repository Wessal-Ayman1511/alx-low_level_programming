#include "main.h"
#include <string.h>
/**
 * print_chessboard- function that print chess board
 *
 * @a : input
 *
 * Return: always 0
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0 ; i < 8 ; i++)
	{
		for (j = 0 ; j < 8 ; j++)
		{
			printf("%c", a[i][j]);
		}
		printf("\n");
	}
}
