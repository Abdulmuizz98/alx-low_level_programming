#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * **alloc_grid - function that returns a pointer to
 * a 2 dimensional array of integers.
 * @width: the width of the 2D array
 * @height: the height of the 2D array.
 *
 * Return: If width or height is 0 or negative, If fails - NULL;
 * otherwise, 1;
 */
int **alloc_grid(int width, int height)
{
	int w, h;
	int **g;

	if (width <= 0 || height <= 0)
		return (NULL);
	g = malloc(sizeof(int *) * height);

	if (g == NULL)
		return (NULL);
	for (h = 0; h < height; h++)
	{
		g[h] = malloc(sizeof(int) * width);
		if (g[h] == NULL)
		{
			for (; h >= 0; h--)
				free(g[h]);

			free(g);
			return (NULL);
		}
	}
	for (h = 0; h < height; h++)
	{
		for (w = 0; w < width; w++)
			g[h][w] = 0;
	}
	return (g);

}
