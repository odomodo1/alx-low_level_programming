#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: string
 * Return: 0
 */
void print_rev(char *s)
{
	int longp = 0;
	int x;

	while (*s != '\0')
	{
		longp++;
		s++;
	}
	s--;
	for (x = longp; x > 0; x--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
