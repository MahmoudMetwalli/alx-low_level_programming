#include "main.h"
#include <stdlib.h>

/**
 * *str_concat -  function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: pointer to the concatenated string or null
 */
char *str_concat(char *s1, char *s2)
{
	char *ss;
	int i, j, a, b;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";
	i = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		j++;
	}
	ss = malloc((1 + i + j) * sizeof(char));
	if (ss != 0)
	{
		a = 0;
		while (a < i)
		{
			ss[a] = s1[a];
			a++;
		}
		b = 0;
		while (b <= j)
		{
			ss[a] = s2[b];
			a++;
			b++;
		}
		a += 1;
		ss[a] = '\0';
		return (ss);
	}
	else
	{
		return (0);
	}
}
