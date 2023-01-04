#include "main.h"

int _check(int, int);
/**
 * is_prime_number - Checks if a number is prime.
 * @n: The number to be assessed
 * Return: If the integer is not prime - 0.
 * If the number is prime - 1.
 */
int is_prime_number(int n)
{
	int n = 2;

	if (n <= 1)
		return (0);

	if (n >= 2 && n <= 3)
		return (1);

	return (_check(2, n));
}
/**
 * _check - check if prime
 * @n: number to be checked
 * @i: iterator
 * Return: If the number is divisible - 0.
 * If the number is not divisible - 1.
 */
int _check(int n, int i)
{
	if (i % n == 0 || i < 2)
		return (0);
	else if (n == i - 1)
	{
		return (1);
	}
	else if (i > n)
	{
		return (_check(n + 1, i));
	}
	return (1);
}
