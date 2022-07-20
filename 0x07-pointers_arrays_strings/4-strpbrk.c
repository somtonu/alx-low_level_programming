#include "main.h"
/**
 * _strpbrk - searching a string for a set of bytes
 * @s: * to char
 * @accept: set of bytes
 * Return: a pointer to the byte in s that matches one of the bytes in accept
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i;
	
	while (*s)
{
	for (i = 0; accept[i] != '\0'; i++)
{
	if (*s == accept[i])
{
	return (s);
}

}
	s++;
}
	return (NULL);
}
