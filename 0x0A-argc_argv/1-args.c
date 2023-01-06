#include <stdio.h>

/**
 * main - program that prints the number of arguments given to it.
 * @argc: argument number
 * @argv: argument vector
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
