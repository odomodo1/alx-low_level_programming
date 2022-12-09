#include <stdio.h>

/**
 * main - Prints all possible combination of three different digit,
 * in ascending order, seperated by a comma followed by a space.
 * Return: Always 0
 */
int main(void)
{
	int digit1, digit2, digit3;

	for (digit1 = 0; digit1 < 5; digit1++)
	{
		for (digit2 = digit1 + 1; digit2 < 6; digit2++)
		{
			for (digit3 = digit2 + 1; digit3 < 7; digit3++)
			{
				putchar((digit1 % 7) + '0');
				putchar((digit2 % 7) + '0');
				putchar((digit3 % 7) + '0');

				if (digit1 == 4 && digit2 == 5 && digit3 == 6)
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
