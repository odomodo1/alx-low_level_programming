#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * count_word - help function to count the number of words in a string
 * @s: string to calculate
 *
 * Return: number of words
 */

int count_word(char *s)
{
	int n, p, m;

	n = 0;
	m = 0;

	for (p = 0; s[p] != '\0'; p++)
	{
		if (s[p] == ' ')
			n = 0;
		else if (n == 0)
		{
			n = 1;
			m++;
		}
	}

	return (m);
}

/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int n, k = 0, len = 0, words, p = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	for (n = 0; n <= len; n++)
	{
		if (str[n] == ' ' || str[n] == '\0')
		{
			if (p)
			{
				end = n;
				tmp = (char *) malloc(sizeof(char) * (p + 1));
				if (tmp == NULL)
					return (NULL);

				while (start < end)
				*tmp++ = str[start++];
				*tmp = '\0';
				matrix[k] = tmp - p;
				k++;
				p = 0;
			}
		}
		else if (p++ == 0)
			start = n;
	}

	matrix[k] = NULL;

	return (matrix);
}
