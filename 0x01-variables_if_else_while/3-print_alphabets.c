#include <stdio.h>

/**
 * main - prints the alphabet in lower case and upper case
 * Return: Always 0
 */
int main(void)
{
	char bg;

	for (bg = 'a'; bg <= 'z'; bg++)
		putchar(bg);

	for (bg = 'A'; bg <= 'Z'; bg++)
		putchar(bg);

	putchar('\n');

	return (0);
}
