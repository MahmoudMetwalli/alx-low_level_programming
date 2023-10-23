#include "main.h"


/**
 * _strspn -  gets the length of a prefix substring
 * @s: scanned strinf
 * @accept: target letters
 * Return: number of bytes in initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, n, k, l;

	n = 0;
	k = 0;
	l = 0;
	while (s[k] != '\0')
	{
		k++;
	}
	while (accept[l] != '\0')
	{
		l++;
	}
	for (i = 0; i < k; i++)
	{
		for (j = 0; j < l; j++)
		{
			if (s[i] == accept[j])
			{
				n = n + 1;
				break;
			}
		}
	}
	return (n);
}
