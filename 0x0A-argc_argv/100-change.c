#include <stdio.h>
#include <stdlib.h>
/**
 * main - function
 * @argc: int arg
 * @argv: arrays
 * Return: an int
 */
int main(int argc, char **argv)
{
	int val;
	int c = 0;

	if (argc != 2)
{
	printf("Error\n");
	return (1);
}
	val = atoi(argv[1]);

	if (val < 0)
{
	printf("%d\n", 0);
}
	if (val % 25 >= 0)
{
	c = c + val / 25;
	val = val % 25;
}
	if (val % 10 >= 0)
{
	c = c + val / 10;
	val = val % 10;
}
	if (val % 5 >= 0)
{
	c = c + val / 5;
	val = val % 5;
}
	if (val % 2 >= 0)
{
	c = c + val / 2;
	val = val % 2;
}
	if (val % 1 >= 0)
{
	c += val / 1;
	val = val % 1;
}
	printf("%d\n", c);
	return (0);
}
