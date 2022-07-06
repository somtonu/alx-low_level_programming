#include "main.h"
/**
 * _islower - checks for lowercase characters
 * @c: is a lowercase character
 * Return: 1 if c is lowercase, 0 if it is not
*/
int _islower(int c)
{
	c = 97;

	if (c >= 97 || c <= 122)
{
	_putchar(c);
	return (1);
}
	else
{
	return (0);
}
}
