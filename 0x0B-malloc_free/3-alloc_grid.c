#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to a 2 dimensional
 * array of integers
 * @width: width element of the grid
 * @height: height element of the grid
 *
 * Return: NULL on failure. Otherwise if width or
 * height is 0 or negative - return NULL
 */

int **alloc_grid(int width, int height)
{
	int *a, len = 0;

	a[width] = 0;

	a[height] = 0;

	if (a == NULL)
		return (NULL);

	for (width = 0; a[width]; width++)
	{
		for (height = 0; a[height]; height++)
		{
			len++;

			a[height] = malloc((sizeof(int) * len));

			a[width][height];

			if (a[width][height] <= 0)
				return (NULL);
		}
		len++;

		a[width] = malloc((sizeof(int) * len));
	}
	free(a[width][height]);

	return (a);
}
