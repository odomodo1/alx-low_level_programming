#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - main function
 * @argc: argument count.
 * @argv: argument vector, array of strings.
 * Return: 0 - success.
 */

int main(int argc, char *argv[])
{
	int k, i, add 0;

	for (k = 1; k < argc; k++)
	{
		for (i = 0; argv[k][i] != '\0'; i++)
		{

			if (!isdigit(argv[k][i]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[k]);
	}
	printf("%d\n", sum);
	return (0);
}
