#include <stdio.h>

/**
 * main - prints numbers in 16
 * Return: Always 0
 */
int main(void)
{
	int num;
	char sh;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (sh = 'a'; sh <= 'f'; sh++)
		putchar(sh);

	putchar('\n');

	return (0);
}
