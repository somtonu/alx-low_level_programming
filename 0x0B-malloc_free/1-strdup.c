#include <stdlib.h>
/**
 * _strdup - duplicate a string
 * @str: pointer to str
 * Return: pointer to duplicate
 */
char *_strdup(char *str)
{
	char *st;
	int i = 0;
	int j;

	if (!str)
	return (NULL);

	while (*(str + i))
{
	i++;
}
	i++;
	st = malloc(sizeof(char) * i);

	if (st == NULL)
{
	return (NULL);
}
	for (j = 0; j <= i; j++)
{
	st[j] = str[j];
}
	return (st);
}
