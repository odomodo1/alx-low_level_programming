#include "main.h"

/**
 * print_numbers - prints numbers between 0 to 9.
 * Return: no return.
 */
void print_numbers(void)
{
	int ph;

	for (ph = 48; ph < 58; ph++)
	{
		_putchar(ph);
	}
	_putchar('\n');
}
