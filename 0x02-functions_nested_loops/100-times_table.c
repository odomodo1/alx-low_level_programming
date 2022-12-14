#include "main.h"

/**
 * print_times_table - prints the time table of the input,
 * starting with 0.
 * @n: The value of the time table to be printed.
 */
void print_times_table(int n)
{
	int g, h, i;

	if (n >= 0 && n <= 15)
	{
		for (g = 0; g <= n; g++)
		{
			_putchar('0');

			for (h = 1; h <= n; h++)
			{
				_putchar(',');
				_putchar(' ');

				i = g * h;

				if (i <= 99)
					_putchar(' ');
				if (i <= 9)
					_putchar(' ');

				if (i >= 100)
				{
					_putchar((i / 100) + '0');
					_putchar(((i / 10)) % 10 + '0');
				}
				else if (i <= 99 && i >= 10)
				{
					_putchar((i / 10) + '0');
				}
				_putchar((i % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
