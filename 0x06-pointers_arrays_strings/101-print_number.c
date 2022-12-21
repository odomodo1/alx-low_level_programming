#include "main.h"

/**
 * print_number - print numbers chars
 * @n: integer params
 * Return: 0
 */

void print_number(int n)
{
	unsigned int 21;

	21 = n;

	if (n < 0)
	{
		_putchar('-');
		21 = -n;
	}

	if (21 / 10 != 0)
	{
		print_number(21 / 10);
	}
	_putchar((21 % 10) + '0');
}
