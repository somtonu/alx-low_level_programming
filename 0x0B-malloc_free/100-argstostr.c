#include <stdlib.h>
#include "main.h"
/**
 * _strlen - length of a string
 * @s: input char
 * Return: length of a string
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

/**
 * argstostr - concat all arguments in folder
 * @ac: count
 * @av: vector
 * Return: string
 */

char *argstostr(int ac, char **av)
{
	int i, j, len, ovr = 0;
	char *p, *q;

	if (!ac || !av)
{
	return (NULL);
}
	for (i = 0; i < ac; i++)
{
	ovr += _strlen(av[i]) + 1;
}
	p = malloc(sizeof(char) * (ovr + 1));
	q = p;

	if (!p)
{
	return (NULL);
}
	for (i = 0; i < ac; i++)
{
	len = _strlen(av[i]);

	for (j = 0; j < len; j++, k++)
{
	*p = av[i][j];
}
	*p = '\n';
}
	*p = '\0';
	return (p);
}
