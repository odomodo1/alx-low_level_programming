#include <stdio.h>
#include "main.h"

/**
 * print_number - prints an integer.
 * @n: input integer.
 * Return: no return.
 */
void print_number(int n)
{
	unsigned int p1;

	if (n < 0)
	{
		p1 = -n;
		_putchar('-');
	}
	else
	{
		p1 = n;
	}

	if (p1 / 10)
	{
		print_number(p1 / 10);
	}

	_putchar((p1 % 10) + '0');
}
