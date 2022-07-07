#include "main.h"
/**
 * _isupper - checks for upper case characters
 * @c: character
 *
 * Return: 1 if TRUE, 0 if FALSE
*/
int _isupper(int c)
{
	if (c <= 90)
{
	_putchar(c);
	return (1);
}
	else
{
	_putchar(c);
	return (0);
}
	return (0);
}
