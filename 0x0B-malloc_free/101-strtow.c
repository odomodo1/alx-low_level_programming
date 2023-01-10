#include <stdlib.h>
#include "main.h"

/**
 * count_word - help function to count the number of words in a string
 * @s: string to calculate
 *
 * Return: number of words
 */

int count_word(char *s)
{
	int n, p, m;

	n = 0;
	m = 0;

	for (p = 0; s[p] != '\0'; p++)
	{
		if (s[p] == ' ')
			n = 0;
		else if (n == 0)
		{
			n = 1;
			m++;
		}
	}

	return (m);
}
