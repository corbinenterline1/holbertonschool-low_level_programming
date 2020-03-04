#include "holberton.h"
#include <stdlib.h>

/**
 * **alloc_grid - allocates a 2dimensional array in memory
 * @width: width of the array
 * @height: height of the array
 * set pointer to pointers an allocated memory of size of height
 * then for each row, allocate memory by size of width
 * then initialize all elements with 0
 * Return: the grid if successfull, NULL otherwise
 */
int **alloc_grid(int width, int height)
{
	int **g;
	int a;
	int b;
	int c;

	if (width <= 0 || height <= 0)
		return (NULL);
	g = malloc(height * sizeof(int *));
	if (g == NULL)
		return (NULL);
	for (a = 0; a < height; a++)
	{
		g[a] = malloc(width * sizeof(int));
		if (g[a] == NULL)
		{
			for (--a; a >= 0; a--)
				free(g[a]);
			free(g);
			return (NULL);
	}
	for (b = 0; b < height; b++)
	{
		for (c = 0; c < width; c++)
			g[b][c] = 0;
	}
	return (g);
}
