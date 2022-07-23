#include <stdio.h>
/**
 * main - function
 * @argc: int arg
 * @argv: arrays
 * Return: an int
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	printf("%s\n", argv[i]);

	return (0);
}
