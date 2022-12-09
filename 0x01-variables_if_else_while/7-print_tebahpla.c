#include <stdio.h>

/**
 * main - print letters in backward mode
 * Return: Always 0
 */
int main(void)
{
	char sh;

	for (sh = 'z'; sh >= 'a'; sh--)
		putchar(sh);

	putchar('\n');

	return (0);
}
