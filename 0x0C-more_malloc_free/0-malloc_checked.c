#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: byte allocated
 * Return: *allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *;

	p = malloc(b);

	if (p == NULL)
	exit(98);

	return (p);
}
