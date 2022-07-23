#include <stdio.h>
#include <stdlib.h>
/**
 * main - function
 * @argc: an integer
 * @argv: an array of strings
 * Return: an int
 */

int main(int argc, char *argv[])
{
	int i;
	unsigned int val[] = {25, 10, 5, 2, 1};
	unsigned int zcoins = 0, amt, rem;

	if (argc > 2 || argc == 1)
{
	printf("Error\n");
	return (1);
}
	if (atoi(*(argv + 1)) < 0)
{
	printf("%d\n", 0);
	return (0);
}
	if (argc == 2)
{
	amt = atoi(*(argv + 1));
	for (i = 0; i <= 4; i++)
{
	if (amt >= val[i])
{
	zcoins += amt / val[i];
	rem = amt % val[i];
}
	else
	continue;
	if (rem == 0)
	break;
	amt = rem;
}
	printf("%d\n", zcoins);
	return (0);
}
	return (0);
}
