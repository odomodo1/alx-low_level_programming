#include <stdio.h>

/**
 * main - prints largest prime factor.
 * Return: Always 0.
 */

int main(void)
{
	long int n, ph;

	n = 612852475143;
	for (ph = 2; ph <= n; ph++)
	{
		if (n % ph == 0)
		{
			n /= ph;
			ph--;
		}
	}
	printf("%ld\n", ph);
	return (0);
}
