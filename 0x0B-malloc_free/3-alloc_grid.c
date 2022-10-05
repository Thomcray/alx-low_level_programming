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
	int **a, i_hgt, i_wid;

	if (width == 0 || height == 0)
		return (NULL);

	a = malloc((sizeof(int *) * height));

	if (a == NULL)
		return (NULL);

	for (i_hgt = 0; i_hgt < height; i_hgt++)
	{
		a[i_hgt] = malloc((sizeof(int) * width));

		if (a[i_hgt] == NULL)
		{
			for (; i_hgt >= 0; i_hgt--)
			{
				free(a[i_hgt]);
			}
			free(a);

			return (NULL);
		}
	}

	for (i_hgt = 0; i_hgt < height; i_hgt++)
	{
		for (i_wid = 0; i_wid < width; i_wid++)
		{
			a[i_hgt][i_wid] = 0;
		}
	}

	return (a);
}
