#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: num of arugments
 * @av: array of strings
 * Return: pointer to array of arrays or null
 */
char *argstostr(int ac, char **av)
{
	int i = 0, j, k, c = 0, l = 0;
	char *ar;

	if (ac == 0 || av == 0)
	{
		return (0);
	}
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			j++;
			c++;
		}
		i++;
	}
	ar = malloc(sizeof(char) * c);
	if (ar == 0)
	{
		return (0);
	}
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			j++;
		}
		k = 0;
		while (k < j)
		{
			ar[l] = av[i][k];
			k++;
			l++;
		}
		ar[l] = '\n';
		i++;
	}
	return (ar);
}
