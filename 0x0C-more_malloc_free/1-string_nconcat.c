#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - Concatenates two strings.
 * @s1: First String.
 * @s2: Second String.
 * @n: Amount of bytes.
 * Return: Pointer to the allocated memory.
 * If malloc fails, status value should equal 98.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *north;
	unsigned int ls1, ls2, lnorth, p;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (ls1 = 0; s1[ls1] != '\0'; ls1++)
		;

	for (ls2 = 0; s2[ls2] != '\0'; ls2++)
		;

	if (n > ls2)
		n = ls2;

	lnorth = ls1 + n;

	north = malloc(lnorth + 1);

	if (north == NULL)
		return (NULL);
	for (p = 0; p < lnorth; p++)
		if (p < ls1)
			north[p] = s1[p];
		else
			north[p] = s2[p - ls1];
		north[1] = '\0';

		return (north);
}
