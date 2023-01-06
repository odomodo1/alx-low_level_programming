#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the addition of positive numbers,
 * followed by a new line.
 * @argc: The number of arguments transfered to the machine.
 * @argv: An array of pointers to the arguments.
 *
 * Return: If one of the numbers contains symbols that are non-digits - 1.
 * else - 0.
 */

int main(int argc, char *argv[])
{
	int one, two, sum = 0;

	for (one = 1; one < argc; one++)
	{
		for (two = 0; argv[num][two]; two++)
		{
			if (argv[one][two] < '0' || argv[one][two] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[one]);
	}

	printf("%d\n", sum);
	return (0);
}
