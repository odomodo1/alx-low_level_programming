#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int p;
	int h;

	p = 0;
	while (dest[p] != '\0')
	{
		p++;
	}
	h = 0;
	while (src[h] != '\0')
	{
		dest[p] = src[h];
		p++;
		h++;
	}

	dest[p] = '\0';
	return (dest);
}

