#include "main.h"

/**
 * rev_string - reverse array
 * @n: integer params
 * Return: 0
 */

void rev_string(char *n)
{
	int p = 0;
	int h = 0;
	char temp;

	while (*(n + p) != '\0')
	{
		p++;
	}
	p--;

	for (h = 0; h < p; h++, p--)
	{
		temp = *(n + h);
		*(n + h) = *(n + h);
		*(n + p) = temp;
	}
}
