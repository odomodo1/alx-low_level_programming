#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints buffer
 * @b: buffer
 * @size: size
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int p, h, f;

	p = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (p < size)
	{
		h = size - p < 10 ? size - p : 10;
		printf("%08x: ", p);
		for (f = 0; f < 10; f++)
		{
			if (f < h)
				printf("%02x", *(b + p + f));
			else
				printf("  ");
			if (f % 2)
			{
				printf(" ");
			}
		}
		for (f = 0; f < h; f++)
		{
			int c = *(b + p + f);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		p += 10;
	}
}
