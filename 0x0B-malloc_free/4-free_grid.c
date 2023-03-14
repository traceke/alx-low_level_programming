#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - function that frees a 2-D grid creted in the alloc_grid function
 *
 * @grid: 2-D grid
 * @height: height of 2-D grid
 *
 * Return: returns 0
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0 ; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
