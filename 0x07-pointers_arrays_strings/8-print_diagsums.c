#include "main.h"

/**
 * print_chessboard - Prints a representation of a chess board
 * @a: 2d of the board
 */

void print_chessboard(char (*a)[8])
{
	unsigned int i;
	unsigned int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}

TASK 7

#include <stdio.h>

/**
 * print_diagsums - "Adds numbers in a diagonal"
 * @a: array containing characters
 * @size: Size of array levels
 */

void print_diagsums(int *a, int size)
{
	int i;
	int tl = 0;
	int tr = 0;
	int s = size * size;

	for (i = 0; i < s; i += size + 1)
	{
		tl += a[i];
	}

	for (i = size - 1; i < s - 1; i += size - 1)
	{
		tr += a[i];
	}

	printf("%d, %d\n", tl, tr);
}
