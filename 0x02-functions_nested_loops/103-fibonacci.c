#include <stdio.h>
/* #define MAX 50 */

/**
 * fib - fibonacci sequence
 * @n: max number in sequence
 * Return: void
 */
void fib(int n)
{
	long int m, sum = 0;
	long int nacci = 1, prev = 0;

	for (m = 1; m <= n; m++)
{
	nacci += prev;
	prev = nacci - prev;

	if (nacci % 2 == 0 && nacci <= 4000000)
	sum += nacci;
}
	printf("%ld\n", sum);
}
/**
 * main - prints the fibonacci sequence of n numbers
 * Return: 0
 */
int main(void)
{
	fib(50);
	return (0);
}
