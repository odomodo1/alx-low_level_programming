#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all arguments of the program into a string
 * arguments are separated by a new line in the string.
 * @ac: The number of arguments passed to the program.
 * @av: An array of pointers to the arguments.
 *
 * Return: If ac == 0, av == NULL, or the function fails - NULL.
 * otherwise - a pointer to the new string.
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int ar, byt, inde, size = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (ar = 0; ar < ac; ar++)
	{
		for (byt = 0; byt < ac; byt++)
			size++;
	}

	str = malloc(sizeof(char) * size + 1);

	if (str == NULL)
		return (NULL);

	inde = 0;

	for (ar = 0; ar < ac; ar++)
	{
		for (byt = 0; av[ar][byt]; byt++)
			str[inde++] = av[ar][byt];

		str[index++] = '\n';
	}

	str[size] = '\0';

	return (str);
}
