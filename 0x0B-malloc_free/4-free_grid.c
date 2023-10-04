#include "main.h"
/**
 * free_grid - A function that frees a 2 dimensional
 * grid previously created by your alloc_grid function.
 *
 * @grid: Two dimensional grid
 * @height: Height dimension of gris
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0 ; i < height ; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
