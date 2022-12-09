#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 * followed by a new line, except q and e
 * Return: Always 0
 */
int main(void)
{
	char sm;

	for (sm = 'a'; sm <= 'z'; sm++)
	{
		if (sm != 'e' && sm != 'q')
			putchar(sm);
	}

	putchar('\n');

	return (0);
}
