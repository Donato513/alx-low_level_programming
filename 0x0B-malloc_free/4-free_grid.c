#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Free a 2D grid.
 * @grid: Pointer to the grid.
 * @height: Height of the grid.
 */

void free_grid(int **grid, int height)
{
	int cont;

	for (cont = 0; cont < height; cont++)
	{
		free(grid[cont]);
	}
	free(grid);
}
