#include "main.h"

/**
 * factorial - Returns the factorial of a given num.
 * @n: The number to find the factorial from.
 *
 * Return: If n > 0 - the factorial of n.
 * If n < 0 - 1 to indicate an error.
 */

int factorial(int n)
{
	int end = n;

	if (n < 0)
		return (-1);

	else if (n >= 0 && n <= 1)
		return (1);

	end *= factorial(n - 1);

	return (end);
}
