#include "main.h"
/**
 * _strlen - length of a string
 * @s: string to evaluate
 *
 * Return: 0
*/
int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
{
	l++;
	s++;
}

	return (l);

}
