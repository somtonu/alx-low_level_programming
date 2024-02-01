#include "main.h"
/**
 * print_rev - print %s in rev
 * @s: string
 *
 * Return: 0
*/
/* void print_rev(char *s)
{
	int r = 0;

	while (s[r] != '\0')
{
	r++;
}
	for (r = r - 1; r >= 0; r--)
{
	_putchar(s[r]);
}
	_putchar('\n');
}
*/
#include <stdio.h>

void print_rev(char *s)
{
	int len = 0;
	int r;
	int b;
	for (r = 0; s[r] != '\0'; r++)
{
	len++;
}
	for (b = len - 1; b >= 0; b--)
{
	putchar(s[b]);
}
	putchar('\n');
}
