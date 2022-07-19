#include "main.h"
/**
 * _strchr - locates a char in a str
 * @s: string
 * @c: char
 * Return: * to char, 0 if char absent
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
{
	if (s[i] == c)
	return (&s[i]);
}
	return (0);
}
