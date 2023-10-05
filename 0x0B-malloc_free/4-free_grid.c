#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees a two dimentional array
 * @grid: input array
 * @height: height of grid
 * Description: frees memory of grid
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
