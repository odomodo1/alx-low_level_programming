#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - creates a two dimensional array of ints
 * @width: width
 * @height: height
 *
 * Return: pointer to the created matrix (Success)
 * otherwise NULL (Error)
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int p, k;

	if (height <= 0 || width <= 0)
		return (NULL);

	array = (int **) malloc(sizeof(int *) * height);

	if (array == NULL)
		return (NULL);
	for (p = 0; p < height; p++)
	{
		array[p] = (int *) malloc(sizeof(int) * width);
		if (array[p] == NULL)
		{
			free(array);
			for (k = 0; k <= p; k++)
				free(array[k]);
			return (NULL);
		}
	}

	for (p = 0; p < height; p++)
	{
		for (k = 0; k < width; k++)
		{
			array[p][k] = 0;
		}
	}
	return (array);
}
