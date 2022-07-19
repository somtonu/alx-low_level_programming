#include "main.h"
/**
* _memset - fills memory with constant byte
* @s: pointer char
* @b: holds a char
* @n: holds an int
* Return: pointer to character
*/
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n > 0)
{
	s[i] = b;
	i++;
	n--;
}
	return (s);
}
