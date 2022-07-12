#include "main.h"
/**
 * rev_string - print %s in rev
 * @s: string
 *
 * Return: 0
*/
void rev_string(char *s)
{
	int r = s[0];

	int rev = 0;

	int i;

	while (s[rev] != '\0')
{
	rev++;
}
	for (i = 0; i < rev; i++)
{
	rev--;
	r = s[i];
	s[i] = s[rev];
	s[rev] = r;
}
}
