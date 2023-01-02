#include "main.h"

/**
 * _memset - use a specific value to fill a block of memory
 * @s: starting address to be filled in memory
 * @b: the desired output
 * @n: number of bytes to be changed
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n);
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
