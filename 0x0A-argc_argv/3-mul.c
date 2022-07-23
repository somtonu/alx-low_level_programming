#include <stdio.h>
#include <stdlib.h>

/**
 * main - function to two numbers
 * @argc: int arg
 * @argv: array
 * Return: an int
 */
int main(int argc, char **argv)
{
	if (argc != 3)
{
	printf("Error\n");

	return (1);
}
	if (argc == 3)
{
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
}
