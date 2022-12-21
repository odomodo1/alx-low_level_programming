#include "main.h"

/**
 * leet - encode into 1337speak
 * @n: input value
 * Return: n value
 */
char *leet(char *n)
{
	int p, f;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (p = 0; n[p] != '\0'; p++)
	{
		for (f = 0; f < 10; f++)
		{
			if (n[p] == s1[f])
			{
				n[p] = s2[f];
			}
		}
	}
	return (n);
}
