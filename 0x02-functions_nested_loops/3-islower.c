#include "main.h"
/**
 * _islower - checks for lowercase characters
 * @c: is a lowercase character
 * Return: 1 if c is lowercase, 0 if it is not
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
{
	return (1);
}
	else
{
	return (0);
}
}
