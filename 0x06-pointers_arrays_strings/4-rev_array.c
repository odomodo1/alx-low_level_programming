#include "main.h"

/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n: number of elements of array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int p;
	int j;

	for (p = 0; p < n--; p++)
	{
		j = a[p];
		a[p] = a[n];
		a[n] = j;
	}
}
