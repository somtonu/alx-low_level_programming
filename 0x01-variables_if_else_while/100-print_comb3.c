#include <stdio.h>
/**
 * main - different combo of two digits
 * Return: integer 0 on success
 */
int main(void)
{
	int a;
	int b;

	for (a = '0'; a <= '9'; a++)
{
	for (b = '0'; b <= '9'; b++)
{
	if (a != b && a < b)
{
	putchar(a);
	putchar(b);

	if (a != '8' || (a == '8' && b != '9'))
{
	putchar(',');
	putchar(' ');
}
}
}
}
	putchar('\n');
	return (0);
}
