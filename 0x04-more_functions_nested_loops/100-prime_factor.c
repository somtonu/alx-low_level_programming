#include <stdio.h>
/**
* main - entry block
* @void: no argument
* Return: 0
*/
int main(void)
{
	long p, num = 612852475143;

	for (p  = 2; p <= num; p++)
{
	if (num % p == 0)
{
	num = num / p;

	p--;
}
}
	printf("%lu\n", p);
	return (0);
}
