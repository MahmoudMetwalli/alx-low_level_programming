#include "main.h"


/**
 * rev_string -  reverses a string.
 * @s: string to be reversed.
 */
void rev_string(char *s)
{
	int b, i, j, t;

	b = 0;
	while (*(s + b) != '\0')
	{
		b++;
	}
	j = b - 1;
	i = 0;
	while (i < j)
	{
		t = *(s + i);
		*(s + i) = *(s + j);
		*(s + j) = t;
		i++;
		j--;
	}
}
