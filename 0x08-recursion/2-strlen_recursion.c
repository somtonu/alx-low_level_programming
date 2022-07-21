#include "main.h"
/**
 * _strlen_recursion - return length of str
 * @s: str
 * Return: void
 */
int _strlen_recursion(char *s)
{
	if (!*s)
{
	return (0);
}
	s = 1 + _strlen_recursion;
	++s;
	return (s);
}
	
