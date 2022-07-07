#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;

/**
 * while loop avoided
 * remove putchar(i); as loop function has been taken out
 * leaving the putchar(i); would still give desired output when compiled
*/
	printf("Infinite loop avoided! \\o/\n");

	return (0);
}
