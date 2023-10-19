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
		e = 0;
		while (e < 52)
		{
			if (a[d] == b[e])
			{
				a[d] = c[e];
				break;
			}
			e++;
		}
	}
	return (a);
}
