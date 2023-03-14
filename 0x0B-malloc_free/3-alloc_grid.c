#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - this returns a pointer to a 2 dimensional array of integers
 *
 * @width: width of the grid
 * @height: heaight of the grid
 *
 * Return: a pointer to the 2-d array of integers, NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **a;
	int i;
	int j;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = malloc(height * sizeof(int *));

	if (a == NULL)
		return (NULL);

	for (i = 0 ; i < height ; i++)
	{
		a[i] = malloc(width * sizeof(int));
		if (a[i] == NULL)
		{
			while (i >= 0)
			{
				i--;
				free(a[i]);
			}
			free(a);
			return (NULL);
		}
	}
	for (i = 0 ; i < height ; i++)
	{
		for (j = 0 ; j < width ; j++)
			a[i][j] = 0;
	}
	return (a);
}
