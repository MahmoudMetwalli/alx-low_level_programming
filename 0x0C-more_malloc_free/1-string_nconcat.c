#include "main.h"
#include <stdlib.h>

/**
 * strnl - calculate size of string
 * @s: string
 * Return: length of string
*/
unsigned int strnl(char *s)
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: num of chars
 * Return: pointer to new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l, k, m = 0, h = 0;
	char *p;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	l = strnl(s1);
	k = strnl(s2);
	if (n >= k)
	{
		n = k;
	}
	p = malloc((sizeof(char) * (l + n + 1)));
	if (p == NULL)
	{
		return (0);
	}
	while (m < (l + n) && s1[m] != '\0')
	{
		p[m] = s1[m];
		m++;
	}
	while (h < (l + n) && s2[h] != '\0')
	{
		p[m] = s2[h];
		m++;
		h++;
	}
	p[m] = '\0';
	return (p);
}
