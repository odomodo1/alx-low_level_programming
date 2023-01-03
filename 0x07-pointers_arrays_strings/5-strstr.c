#include "main.h"
#include <stdio.h>

/**
 * _strstr - Locates a strings
 * @haystack: The string to be checked
 * @needle: The substring to be located
 *
 * Return: If the string is found - a pointer to the start of the found string
 * If the string is not found - NULL.
 */

char *_strstr(char *haystack, char *needle)
{
	int num;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		num = 0;

		if (hastack[num] == needle[num])
		{
			do {
				if (needle[num + 1] == '\0')
					return (haystack);

				num++;

			} while (haystack[num] == needle[num]);
		}

		haystack++;
	}

	return ('\0');
}
