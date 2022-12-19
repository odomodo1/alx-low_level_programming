#include "main.h"

/**
 * puts2 - Write a function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */

void puts2(char *str)
{
	int longp = 0;
	int x = 0;
	char *y = str;
	int m;

	while (*y != '\0')
	{
		y++;
		longp++;
	}
	x = longp - 1;
	for (m = 0; m <= x; m++)
	{
	if (m % 2 == 0)
	{
		_putchar(str[m]);
	}
	}
	_putchar('\n');
}
