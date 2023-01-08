#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the addition of positive numbers,
 * followed by a new line.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of pointers to the argument.
 *
 * Return: If one of the numbers contains symbols that are non-digits - 1.
 * Otherwise - 0.
 */

int main(int argc, char *argv[])
{
	int boo, bae, sum = 0;

	for (boo = 1; boo < argc; boo++)
	{
		for (bae = 0; argv[boo][bae]; bae++)
		{
			if (argv[boo][bae] < '0' || argv[boo][bae] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[boo]);
	}

	printf("%d\n", sum);
	return (0);
}
