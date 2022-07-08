#include "main.h"
#include <stdio.h>
/**
 * main - fizzbuzz
 *
 * Return: 0
*/
int main(void)
{
	int fb;

	for (fb = 1; fb < 100; fb++)

	if (fb % 15 == 0)
{
	printf("FizzBuzz ");
}
	else if (fb % 3 == 0)
{
	printf("Fizz ");
}
	else if (fb % 5 == 0)
{
	printf("Buzz ");
}
	else
{
	printf("%d ", fb);
}
	printf("Buzz");
	printf("\n");
	return(0);
}

