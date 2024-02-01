/** #include "main.h"
 *
 * print_rev - print %s in rev
 * @s: string
 *
 * Return: 0
*/
/* void print_rev(char *s)
{
	int r = 0;

	while (s[r] != '\0')
{
	r++;
}
	for (r = r - 1; r >= 0; r--)
{
	_putchar(s[r]);
}
	_putchar('\n');
} */
#include "main.h"
#include <stdio.h>

void print_rev(char *s)
{
	int len = 0;
	int r;
	int b;
	for (r = 0; s[r] != '\0'; r++)
{
	len++;
}
	for (b = len; s[b] >= s[len]; b--)
{
	putchar(s[b]);
}
	putchar('\n');
	/*    printf("lenght 63? = %d\n", len); */
}
