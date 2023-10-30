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
		i -= 1;
		a = 0;
		while (a <= i)
		{
			ss[a] = s1[i];
			a++;
		}
		a += 1;
		j -= 1;
		while (a <= j)
		{
			ss[a] = s2[j];
			a++ ;
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
