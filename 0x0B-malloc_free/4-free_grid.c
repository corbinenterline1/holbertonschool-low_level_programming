#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - Frees grid from previous question from memory
 * @grid: input pointer to pointers of a 2d array
 * @height: input height of grid
 * Undoes memory of elements of array, then removes a
 * Must not attempt to read or write memory once you have handed
 * it back with free(), which means we have to free the chunks
 * with their pointers stored in grid[a] before we free grid itself
 */
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
		free(grid[a]);
	free(grid);
}
