#include <stdio.h>
#include "main.h"
/**
 * print_array - print series of value
 * @a: value 1
 * @n: value 2
 *
 * Return: 0
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
{	
	printf("%d", a[i]);

	if (i != n - 1)
{
	printf(", ");
}
}
	printf("\n");
}
