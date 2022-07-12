#include "main.h"
/**
 * _puts - prints %s then \n
 * @str: string
 *
 * Return: 0
*/
void _puts(char *str)
{
	int t = 0;

	while (*(str + t) != '\0')
{
	_putchar(str[t]);
	t++;
}
	_putchar('\n');
}
