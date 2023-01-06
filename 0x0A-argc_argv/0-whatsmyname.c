#include <stdio.h>
#include "main.h"

/**
 * main - my name is my identity
 * @argc: number of arguments
 * @argv: whats my name
 * Return: Always 0 (Success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
