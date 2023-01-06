#include "main.h"

/**
 * _strcpy - a function that copies the string pointed to by src
 * @dest: A buffer to copy the string to.
 * @src: The source string to copy.
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}

	return (dest);
}
