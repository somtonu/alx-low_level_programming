#include "main.h"
/**
 * factorial - prints n!
 * @n: integer
 * Return: integer
 */
int factorial(int n)
{
	if (n == 0)
	return (1);

	if (n < 0)
	return (-1);

	n = n * factorial(n - 1);
	return (n);
}
