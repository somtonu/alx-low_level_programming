#include "main.h"
/**
 * times_table - prints a nine multiplication table
 *
 * Return: is 0, a timestable
*/
void times_table(void)
{
	int v, w, x;

	for (v = 0; v <= 9; v++)
{
	for (w = 0; w <= 9; w++)
{
	x = v * w;

	if (w == 0)
	_putchar(x + '0');

	else if (x <= 9)
{
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
	_putchar(x + '0');
}
	else
{
	_putchar(',');
	_putchar(' ');
	_putchar(x / 10 + '0');
	_putchar(x % 10 + '0');
}
}
	_putchar('\n');
}
}
