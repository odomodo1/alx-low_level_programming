#include <stdio.h>

/**
 * main - prints the sum of all multiples of number 3 or 5
 * up to the number 1024
 * Return: Always 0.
 */

int main(void)
{
	int p, sum = 0;

	for (p = 0; p < 1024; p++)
	{
		if ((p % 3) == 0 || (p % 5) == 0)
			sum += p;
	}

	printf("%d\n", sum);

	return (0);
}
