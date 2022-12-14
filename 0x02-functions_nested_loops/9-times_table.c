#include "main.h"

/**
 * times_table - print 9 times table
 */
void times_table(void)
{
	int num, multiply, produce;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');

		for (multiply = 1; multiply <= 9; multiply++)
		{
			_putchar(',');
			_putchar(' ');

			produce = num * multiply;

			if (produce <= 9)
				_putchar(' ');
			else
				_putchar((produce / 10) + '0');

			_putchar((produce % 10) + '0');
		}
		_putchar('\n');
	}
}
