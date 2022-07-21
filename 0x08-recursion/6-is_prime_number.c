#include "main.h"
int prime(int, int);
int divide(int, int);
/**
 * is_prime_number - checks for prime number
 * @n: integer to check
 * Return: 1 if true, 0 if false
 */
int is_prime_number(int n)
{
	if ((!(n % 2) && n != 2) || n < 2)
	return (0);

	return (divide(3, n));
}

/**
 * divide - check divisiblity
 * @a: int
 * @b: int
 * Return: 1 or 0
 */
int divide(int a, int b)
{
	if (b % a == 0)
	return (0);

	if (b / 2 > a)
	return (divide(a + 2, b));

	else
	return (1);
}
