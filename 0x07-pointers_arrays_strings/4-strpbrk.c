#include "main.h"


/**
 * *_strpbrk - searches a string for any of a set of bytes
 * @s: string to be searched
 * @accept: string to be looked up
 * Return: pointer if found and null if not
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j, k;
	char *p;

	k = 0;
	while (s[k} != '\0')
	{
		k++;
	}
	for (i = 0; i <= k; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				p = (s + i);
				break;
			}
			else
			p = '\0';
		}
		if (p == (s + i))
                        {
                                break;
                        }
	}
	return (p);
}
