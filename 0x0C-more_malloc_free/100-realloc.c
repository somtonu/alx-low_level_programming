#include "main.h"
#include <stdlib.h>

/**
 * _realloc -  reallocate a mem. block with malloc and free
 * @ptr: pointer
 * @old_size: old size
 * @new_size: new size
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *a, *b;
	unsigned int i;

	if (ptr != NULL)
	a = ptr;

	else
{
	return (malloc(new_size));
}
	if (new_size == old_size)
	return (ptr);

	if (new_size == 0 && ptr != NULL)
{
	free(ptr);
	return (0);
}
	b = malloc(new_size);
	if (b == NULL)
	return (0);
	for (i = 0; i < (old_size || i < new_size); i++)
{
	*(b + i) = a[i];
}
	free(ptr);
	return (b);
}
