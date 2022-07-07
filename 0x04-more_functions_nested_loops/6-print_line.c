#include "main.h"
/**
 * print_line - draws a straight line
 * @n: a character
 * Return: 0
*/
void print_line(int n)
{
	int u;

	if (n <= 0)
{
	_putchar('\n');
}
	else
{
	for (u = 0; u < n; u++)

	_putchar('_');
	_putchar('\n');
}
}
