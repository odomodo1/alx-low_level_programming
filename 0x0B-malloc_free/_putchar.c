#include "main.h"
#include <unistd.h>

/**
 * _putchar - write the character c to stdout
 * @c: the character to print
 *
 * Return: On success 1.
 * On error, -1 is reversed, and is set accordingly.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
