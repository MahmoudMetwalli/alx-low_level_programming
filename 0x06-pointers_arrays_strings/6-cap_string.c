#include "main.h"


/**
 * *cap_string - capitalizes all words of a string
 * @a: string to capitalize
 * Return: capitalized string
 */
char *cap_string(char *a)
{
	int c = 0, b = 0;

	while (a[c] != '\0')
	{
		c++;
	}
	while (b < c)
	{
		if (a[0] >= 97 && a[0] <= 122)
			a[0] = a[0] - 32;
		if (((a[b] < 97) && (a[b] > 122)) && (a[b + 1] >= 97 && a[0] <= 122))
		{
			a[b + 1] = a[b + 1] - 32;
		}
	}
	return (a);
}
