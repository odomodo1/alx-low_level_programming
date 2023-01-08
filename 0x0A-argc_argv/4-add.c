#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 * @argc: argument count.
 * @argv: argument vector, array of strings.
 * Description: If there is a character it prints error if not it adds it.
 * Return: 1 or 0
 */

int main(int argc, char *argv[])
{
	int sum, k;
	char *i;
	int num;

	sum = 0;
	if (argc > 1)
	{
		for (k = 1; argv[k]; k++)
		{
			num = strtol(argv[k], &i, 10);
			if (!*i)
				sum += num;
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}
