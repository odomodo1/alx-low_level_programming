#include "main.h"
#include <stdio.h>

/**
 * _memset - use a specific value to fill a block of memory
 * @s: starting address to be filled in memory
 * @b: the desired output
 * @n: number of bytes to be changed
 * Return: changed array with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n);
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
