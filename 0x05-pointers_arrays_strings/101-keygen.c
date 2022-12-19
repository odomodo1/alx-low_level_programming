#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid
 * crack me program 101 passwords
 * Return: Always 0 (Success)
 */
int main(void)
{
	int pass[100];
	int p, sum, n;

	sum = 0;

	srand(time(NULL));

	for (p = 0; p < 100; p++)
	{
		pass[p] = rand() % 78;
		sum += (pass[p] + '0');
		putchar(pass[p] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			n = 2772 - sum - '0';
			sum += n;
			putchar(n + '0');
			break;
		}
	}
	return (0);
}
