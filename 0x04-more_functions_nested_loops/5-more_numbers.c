#include "main.h"


/**
 * more_numbers - prints numbers between 0 to 14
 * 10 times.
 * Return: no return.
 */
void more_numbers(void)
{
	int i, ph;

	for (i = 0; i < 10; i++)
	{
		for (ph = 0; ph < 15; ph++)
		{
			if (ph >= 10)
				_putchar((ph / 10) + 48);
			_putchar((ph % 10) + 48);
		}
		_putchar('\n');
	}
}
