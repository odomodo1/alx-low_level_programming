#include "main.h"

/**
 * print_last_digit - prints the last of the digit
 * @n: the number
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int ln = n % 10;

	if (ln < 0)
		ln *= -1;

	_putchar(ln + '0');

	return (0);
}
