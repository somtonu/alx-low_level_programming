#include <stdlib.h>
/**
 * alloc_grid - creates a 2D array
 * @width: columns
 * @height: rows
 * Return: a pointer to an array of integers
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **k;

	if (width <= 0 || height <= 0)
		return (NULL);
	k = malloc(height * sizeof(int *));
	if (k == NULL)
	{
		free(k);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		k[i] = malloc(width * sizeof(int));
		if (k[i] == NULL)
		{
			for (--i; i >= 0; i--)
				free(k[i]);
			free(k);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			k[i][j] = 0;
	return (k);
}
