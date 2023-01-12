#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#define ERR_MSG "Error"

/**
 * is_digit - checks if a string contains a non-digit char
 * @s: string to be evaluated
 * Return: 0 if a non-digit is found, 1 otherwise
 */
int is_digit(char *s)
{
	int k = 0;

	while (s[k])
	{
		if (s[k] < '0' || s[i] > '9')
			return (0);
		k++;
	}
	return (k);
}

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int k = 0;

	while (s[k] != '\0')
	{
		k++;
	}
	return (k);
}

/**
 * errors - handles errors for main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int l1, l2, len, k, move, d1, d2, *result, a = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	l1 = _strlen(s1);
	l2 = _strlen(s2);
	len = l1 + l2 + 1;
	result = malloc(sizeof(int) * len);
	if (!result)
		return (1);
	for (k = 0; k <= l1 + l2; k++)
		result[k] = 0;
	for (l1 = l1 - 1; l1 >= 0; l1--)
	{
		d1 = s1[l1] - '0';
		move = 0;
		for (l2 = _strlen(s2) - 1; l2 >= 0; l2--)
		{
			d2 = s2[l2] - '0';
			move += result[l1 + l2 + 1] + (d1 * d2);
			result[l1 + l2 + 1] = move % 10;
			move /= 10;
		}
		if (move > 0)
			result[l1 + l2 + 1] += move;
	}
	for (k = 0; k < len - 1; k++)
	{
		if (result[k])
			a = 1;
		if (a)
			_putchar(result[k] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
