#include "main.h"
/**
 * print_last_digit - prints the last digit of a given number
 * @l: is an integer
 *
 * Return: 0 on success
*/
int print_last_digit(int l)
{
	int p = l % 10;

	if (p < 0)
{
	_putchar(-p + '0');
	return (-p);
}
	else
{
	_putchar(p + '0');
	return (p);
}
}

