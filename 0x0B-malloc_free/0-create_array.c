#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates a char [] with a specific char
 * @size: size of array
 * @c: character
 * Return: NULL
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i = 0;

	if (size == 0)
	return (NULL);

	p = malloc((size * sizeof(char)));

	if (p == NULL)
	return (NULL);

	while (i < size)
{
	i++;
	p[i] = c;
}
	return (p);
}

