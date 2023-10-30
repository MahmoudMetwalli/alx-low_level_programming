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
		for (a = 0; a < i; a++)
		{
			ss[a] = s1[a];
		}
		for (b = 1; (a + b) < (i + j); b++)
		{
			ss[(a + b)] = s2[j];
		}
		ss[(a + b + 1)] = '\0';
		return (ss);
	}
	else
	{
		return (0);
	}
}
