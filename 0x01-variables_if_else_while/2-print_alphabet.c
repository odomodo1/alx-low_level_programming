#include <stdio.h>

/**
 * main - prints the alphabet using lower case
 * Return: Always 0
 */
int main(void)
{
	char cl;

	for (cl = 'a'; cl <= 'z'; cl++)
	{
		putcher(cl);
	}
	putcher('\n');
	return (0);
}
