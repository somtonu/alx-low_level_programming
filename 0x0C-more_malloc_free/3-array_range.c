#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: minimum
 * @max: maximum
 * Return: array
 */
int *array_range(int min, int max)
{
	int *p, i = 0, t = min;

	if (min > max)
		return (0);
	p = malloc((max - min + 1) * sizeof(int));

	if (!p)
		return (0);
	while (i <= max - min)
	p[i++] = t++;
	return (p);
}
