#include "main.h"
/**
 * puts_half - prints half the string
 * if string is odd, n - 1/2 to be printed
 * @str: string
 *
 * Return: 0
*/
void puts_half(char *str)
{
	int h, n, j;

	j = 0;

	for (h = 0; str[h] != '\0'; h++)
	j++;

	n = j / 2;

	if (j % 2 != 0)
{
	n = (j + 1) / 2;
}
	for (h = n; str[h] != '\0'; h++)
{
	_putchar(str[h]);
}
	_putchar('\n');
}
