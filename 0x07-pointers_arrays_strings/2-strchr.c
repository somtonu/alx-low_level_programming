#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates a char in a str
 * @s: string
 * @c: char
 * Return: * to char, 0 if char absent
 */
char *_strchr(char *s, char c)
{
	while(1)
{
	if (*s == c)
	return (s);

	if (*s == '\0')
	return ('\0');
	s++;
}
	return (0);
}
