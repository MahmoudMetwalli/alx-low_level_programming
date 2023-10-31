#include "main.h"
#include <stdlib.h>

/**
 * strtow - splits a string into words
 * @str: string to be splitted
 * Return: pointer to arrays or null
 */
char **strtow(char *str)
{
	int i = 0, j = 1, k = 0, l, m, r;
	char **s;

	if (str == 0 || *str == 0)
	{
		return (0);
	}
	while (str[i] != '\0')
	{
		if (str[i] == ' ' && str[(i - 1)] != ' ')
		{
			j++;
		}
		i++;
	}
	s = malloc(sizeof(char *) * j);
	if (s == 0)
	{
		return (0);
	}
	for (l = 0; l < j; l++)
	{
		for (r = 0; s[l][r] != '\0'; r++)
		s[l] = malloc(sizeof(char) * r);
		m = 0;
		while ((str[k] == ' ' && str[(k - 1)] != ' ') || k < i)
		{
			s[l][m] = str[k];
			m++;
			k++;
		}
	}
	s[l][(m + 1)] = '\0';
	return (s);
}
