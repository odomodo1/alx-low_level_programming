#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 * Return: A pointer to the changed string.
 */
char *cap_string(char *str)
{
	int index = 0;

	while (str[index])
	{
		while (!(str[index] >= 'a' && str[index] <= 'z'))
			point++;

		if (str[point - 1] == ' ' ||
			str[point - 1] == '\t' ||
			str[point - 1] == '\n' ||
			str[point - 1] == ',' ||
			str[point - 1] == ';' ||
			str[point - 1] == '.' ||
			str[point - 1] == '!' ||
			str[point - 1] == '?' ||
			str[point - 1] == '"' ||
			str[point - 1] == '(' ||
			str[point - 1] == ')' ||
			str[point - 1] == '{' ||
			str[point - 1] == '}' ||
			point == 0)

				str[point] -= 32;
		point++;
	}
	return (str);
}
