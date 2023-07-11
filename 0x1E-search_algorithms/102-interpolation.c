#include "search_algos.h"

/**
 * interpolation_search - searches for a value in an array of
 * integers using the Interpolation search algorithm
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pi, down, up;
	double f;

	if (array == NULL)
		return (-1);

	down = 0;
	up = size - 1;

	while (size)
	{
		f = (double)(up - down) / (array[up] - array[down]) * (value - array[down]);
		pi = (size_t)(down + f);
		printf("Value checked array[%d]", (int)pi);

		if (pi >= size)
		{
			printf(" is out of range\n");
			break;
		}
		else
		{
			printf(" = [%d]\n", array[pi]);
		}

		if (array[pi] == value)
			return ((int)pi);

		if (array[pi] < value)
			down = pi + 1;
		else
			up = pi - 1;

		if (down == up)
			break;
	}

	return (-1);
}
