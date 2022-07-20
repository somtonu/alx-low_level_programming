#include "main.h"
/**
 * print_chessboard - magnus carlsen
 * @a: two dimensional array
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int y, b;

	for (y = 0; y < 8; y++)
{
	for (b = 0; b < 8; b++)
{
	_putchar(a[y][b]);
}
	_putchar('\n');
}
}
