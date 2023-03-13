#include <stdlib.h>
#include "main.h"

/**
 * free_grid - free memory allocation
 * @grid: grid to free
 * @height: height of the grid
 * Author: Mulugeta Z
 *
 * Description:
 * Created:  Wed Mar 13 04:23:12 PM EAT 2023
 * Filename: 4-free_grid.c
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height == 0)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
