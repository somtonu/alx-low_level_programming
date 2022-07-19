#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: destination
 * @src: source to be copied
 * @n: no. of copies
 * Return: *dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int b = 0;

	for (n > 0; dest[a] = src[b]; n--)
{
	a++;
	b++;
}
	return (dest);
}
