#include <stdlib.h>
#include "main.h"
/**
 * free_grid - function to free 2 dimensional array
 * @grid: array grid
 * @height: array height
 * Return: always 0
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
