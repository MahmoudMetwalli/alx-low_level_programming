#include "main.h"


/**
 * *rot13 -  encodes a string using rot13
 * @a: string to be encoded
 * Return: encoded string
 */
char *rot13(char *a)
{
	char b[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char c[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int d, e;

	for (d = 0; a[d] != '\0'; d++)
	{
		for (e = 0; e < 52; e++ )
		{
			if (a[d] == b[e])
			{
				b[e] = c[e];
				break;
			}
		}
	}
	return (a);
}
