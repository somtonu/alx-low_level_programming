#include "main.h"
/**
 * _islower - checks for lowercase characters
 * @c: is a lowercase character
 * Return: 1 if c is lowercase, 0 if it is not
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
{
	return (1);
}
	else
{
	return (0);
}
}

/* this is another way of solving this, redoing tasks to grab a better understanding of c */
/* note; the code doesn't follow the task standard */
int _islower(int c)
	char a[] = "abcdefghijklmnopqrstuvwxyz"; /* the alphabet */
	int i = 0; /* this is used to increment the array */

	while (a[i] != '\0') /* given a[] does not exceed a[27] which is the end of file */
{
	i++;

/* while looping if the prototype int c equals the character in the array a[i] the return value is printed */
	if (c == a[i]) 
{
	return (1);
}
} /* end of loop */
	return (0);
}
