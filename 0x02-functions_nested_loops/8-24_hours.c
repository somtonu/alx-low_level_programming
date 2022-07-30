#include "main.h"
/**
 * jack_bauer - prints entire minute of the day
 * h for hours, m for minutes
 *
 * Return: 00:00 to 23:59
*/
void jack_bauer(void)
{
	int h, m;

	for (h = 0; h < 24; h++)
{
	for (m = 0; m < 60; m++)
{
	_putchar(h / 10 + '0');
	_putchar(h % 10 + '0');
	_putchar(58);
	_putchar(m / 10 + '0');
	_putchar(m % 10 + '0');
	_putchar('\n');
/* the 58 represents : in ASCII code */
}
}
}

/* alternative use of for loops */
void jack_bauer(void)
{
	char i, j, k, l;

	for (i = '0'; i < '3'; i++) /* first loop for first digit */
{
	for (j = '0'; j <= '9'; j++)
{
	for (k = '0'; k <= '5'; k++) /* first digit of the 24h clock, cannot be greater than 5 */
{
	for (l = '0'; l <= '9'; l++)
{
	if (i == '2' && j > '3') /* this condition is included as the maximum hour on the 24h clock is 23, so numbers greater than 23 is omitted */
	continue; /* used to skip a condition, and move on to the next iteration in the loop, in this case 24 to 29 is omitted */
	putchar(i);
	putchar(j);
	putchar(':');
	putchar(k);
	putchar(l);
	putchar('\n');
}
}
}
} /* end of loop */
	return; /* void return, can also be omitted */
}
