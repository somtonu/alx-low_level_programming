#include "main.h"
/**
 * more_numbers - prints 1 through 14 ten times
 *
 * Return: 0
*/
void more_numbers(void)
{
	int l, f;

	l = 0;

	while (l <= 9)
{
	for (f = 0; f <= 14; f++)
{
	if (f > 9)
	_putchar(f / 10 + '0');
	_putchar(f % 10 + '0');
}

{
	_putchar('\n');
	l++;
}
}
}
