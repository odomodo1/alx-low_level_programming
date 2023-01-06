#include "main.h"

/**
 * _memset - fillsthe first n bytes of the memory area with constant byte
 * @n: number of bytes
 * @s: the memory area pointed to
 * @b: constant byte
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
		s[k] = b;
	return (s);
}
