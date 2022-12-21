#include "main.h"

/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int p;
	int h;

	p = 0;
	while (dest[p] != '\0')
	{
		p++;
	}
	h = 0;
	while (h < n && src[h] != '\0')
	{
	dest[p] = src[h];
	p++;
	h++;
	}
	dest[p] = '\0';
	return (dest);
}
