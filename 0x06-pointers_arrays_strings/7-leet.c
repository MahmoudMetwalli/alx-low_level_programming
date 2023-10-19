#include "main.h"


/**
 * *leet - encodes a string into 1337
 * @e: the string to encode
 * Return: encoded string
 */
char *leet(char *e)
{
	char a[5] = {97, 101, 111, 116, 108};
	char b[5] = {65, 69, 79, 84, 76};
	char c[5] = {52, 51, 48, 55, 49};
	int d, f;

	for (d = 0; e[d] != '\0'; d++)
	{
		f = 0;
		while (f < 5)
		{
			if (e[d] == a[f] || e[d] == b[f])
			{
				e[d] = c[f];
			}
			f++;
		}
	}
	return (e);
}
