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
