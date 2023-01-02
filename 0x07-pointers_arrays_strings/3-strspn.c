#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: input string to search for substring
 * @a: that prefix substring must include
 * Return: length of prefix substring
 */

unsigned int _strspn(char *s, char *a)
{
	unsigned int n = 0;

	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				n++;
				break;
			}
			else if (accept[r + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
