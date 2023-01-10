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
	int n, c, w;

	n = 0;
	w = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			n = 0;
		else if (n == 0)
		{
			n = 1;
			w++;
		}
	}

	return (w);
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
	int p, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	for (p = 0; p <= len; p++)
	{
		if (str[p] == ' ' || str[p] == '\0')
		{
			if (c)
			{
				end = p;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);

				while (start < end)
				*tmp++ = str[start++];
				*tmp = '\0';
				matrix[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = p;
	}

	matrix[k] = NULL;

	return (matrix);
}
