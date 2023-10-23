#include "main.h"


/**
 * *_strpbrk - searches a string for any of a set of bytes
 * @s: string to be searched
 * @accept: string to be looked up
 * Return: pointer if found and null if not
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j, k, l;
	char *p;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	while (accept[l] != '\0')
	{
		l++;
	}
	j = 0;
	while (j <= i)
	{
		k = 0;
		while (k <= l)
		{
			if (s[j] == accept[k])
			{
				p = s + j;
				break;
			}
			else
			{
				p = '\0';
			}
			k++;
		}
		if (p == (s + j))
		{
			break;
		}
		j++;
	}
	return (p);
}
