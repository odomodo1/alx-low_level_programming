#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - prints chess board
 * @a: two dimensional array
 */
void print_chessboard(char (*a)[8])
{
	int p, k;

		for (p = 0; p < 8; p++)
		{
			for (k = 0; k < 8; k++)
			{
				_putchar(a[p][k]);
			}
				_putchar('\n');
		}
}
