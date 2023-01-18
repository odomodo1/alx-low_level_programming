#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the opcodes of itself.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 *
 */
int main(int argc, char *argv[])
{
	int bytes, pi;
	int (*address)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (pi = 0; pi < bytes; pi++)
	{
		opcode = *(unsigned char *)address;
		printf("%.2x", opcode);

		if (pi == bytes - 1)
			continue;
		printf(" ");
		address++;
	}
	printf("\n");
	return (0);
}
