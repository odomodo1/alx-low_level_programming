#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int p;
	int h;

	p = 0;
	while (dest[i] != '\0')
	{
		p++;
	}
	h = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		p++;
		h++;
	}

	dest[i] = '\0';
	return (dest);
}
