#include "main.h"

/**
 * print_most_numbers - prints numbers between 0 to 9
 * (neither 2 nor 4).
 * Return: no return.
 */
void print_most_numbers(void)
{
	int ph;

	for (ph = 48; ph < 58; ph++)
	{
		if (ph != 50 && ph != 52)
			_putchar(ph);
	}
	_putchar('\n');
}
