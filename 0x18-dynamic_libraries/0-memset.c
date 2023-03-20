#include "main.h"

/**
 * _memset - fill the first n bytes of the memory area with constant byte
 * @n: number of bytes
 * @s: the memory area pointed to
 * @b: constant byte
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int p;

	for (p = 0; p < n; p++)
		s[p] = b;
	return (s);
}
