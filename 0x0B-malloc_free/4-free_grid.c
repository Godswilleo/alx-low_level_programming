#include "main.h"
/**
 * free_grid - frees grid
 * @grid: grid width
 * @height: grid height
 * Return: free grid
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
