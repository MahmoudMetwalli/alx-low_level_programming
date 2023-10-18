#include "main.h"


/**
 * *string_toupper - hanges all lowercase letters of a string to uppercase
 * @a: string
 * Return: string
 */
char *string_toupper(char *a)
{
	int c, b;

	c = 0;
	b = 0;
	while (a[c] != '\0')
	{
		c++;
	}
	while (b < c)
	{
		if (a[b] >= 97 && a[b] <= 122)
		{
			a[b] = a[b] - 32;
		}
		b++;
	}
	return (a);
}
