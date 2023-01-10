#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenates all the arguments to the program
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: Pointer to the new string (Success), NULL (Error)
 */
char *argstostr(int ac, char **av)
{
	int n, p, m, len;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (n = 0; n < ac; n++)
	{
		for (p = 0; av[n][p] != '\0'; p++)
			len++;
		len++;
	}

	str = malloc(sizeof(char) * (len + 1));

	if (str == NULL)
		return (NULL);

	m = 0;

	for (n = 0; n < ac; n++)
	{
		for (p = 0; av[n][p] != '\0'; p++)
		{
			str[m] = av[n][p];
			m++;
		}
		str[m] = '\n';
		m++;
	}

	return (str);
}
