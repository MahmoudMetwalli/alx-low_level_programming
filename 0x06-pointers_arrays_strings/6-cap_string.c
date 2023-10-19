#include "main.h"


/**
 * *cap_string - capitalizes all words of a string
 * @a: string to capitalize
 * Return: capitalized string
 */
char *cap_string(char *a)
{
	char e[] = {' ', '	', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
	int c, b, d;

	c = 0;
	while (a[c] != '\0')
	{
		c++;
	}
	if (a[0] >= 97 && a[0] <= 122)
	{
		a[0] = a[0] - 32;
	}
	for (b = 0; b < c; b++)
	{
		d = 0;
		while (d < 13)
		{
			if ((a[b] == e[d]) && ((a[(b + 1)] >= 97 && a[(b + 1)] <= 122)))
			{
				a[(b + 1)] = a[(b + 1)] - 32;
			}
			d++;
		}
	}
	return (a);
}
