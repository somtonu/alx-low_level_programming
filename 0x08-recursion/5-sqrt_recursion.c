#include "main.h"
int _sqrt(int, int);
/**
 * _sqrt_recursion - return natural sq.root of integer
 * @n: int
 * Return: integer, if square is not natural -1
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - square root
 * @n: sq. root
 * @i: square
 * Return: √n
 */
int _sqrt(int n, int i)
{
	if (n < 0)
	return (-1);

	if ((i * i) > n)
	return (-1);

	if ((i * i == n))
	return (i);

	n = (_sqrt(n, i + 1));
	return (n);
}
