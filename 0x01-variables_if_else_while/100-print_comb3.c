#include <stdio.h>

/**
 * main - Entry point
 * @void: parameter
 * Return: 0 (success)
 */

int main(void)
{
	int e;
	int f;

	for (e = 48; e < 58; e++)
	{
		for (f = e + 1; f < 58; f++)
		{
			putchar(e);
			putchar(f);
			if (e != 56 && f != 58)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar(10);

	return (0);
}
