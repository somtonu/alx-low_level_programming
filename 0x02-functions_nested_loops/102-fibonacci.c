#include <stdio.h>
/* #define MAX 50 */

/**
 * fib - fibonacci sequence
 * @n: max number in sequence
 * Return: void
 */
void fib(int n)
{
	long int m, nacci = 2, prev = 1;

	for (m = 1; m <= n; m++)
{
	if (m <= 2)
{
	printf("%ld, ", m);
}
	else
{
	nacci += prev;
	prev = nacci - prev;
	printf("%ld, ", nacci);
}
}
	printf("\n");
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
