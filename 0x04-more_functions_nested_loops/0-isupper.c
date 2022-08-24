#include "main.h"
/**
 * _isupper - checks for upper case characters
 * @c: character
 *
 * Return: 1 if TRUE, 0 if FALSE
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
{
	return (1);
}
	else
{
	return (0);
}
	return (0);
}

/* Alternative Code */
/*
int _isupper(int c)
{
	char t = 'A';

	for (; t <= 'Z'; t++)
{
	if (c != t)
{
	return (0);
}
	else
{
	return (1);
}
}
	return (0);
} */
