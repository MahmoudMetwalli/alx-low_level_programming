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
	int i, j, k, c;
	char **ar;

	if (ac == 0 || av == 0)
	{
		return (0);
	}
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (ar[i][j] != '\0')
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
		while (ar[i][j] != '\0')
		{
			j++;
		}
		while (k < j)
		{
			ar[i][k] = av[i][k];
			k++;
		}
		k += 1;
		ar[i][k + 1] = '\n';
		i++;
	}
	return (*ar);
}
