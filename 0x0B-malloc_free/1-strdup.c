#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - pointer to allocated space, containing the string given
 * @str: given string
 * Return: pointer to new address
 */
char *_strdup(char *str)
{
	int i, j;
	char *str2;

	if (str == 0)
	{
		return (0);
	}
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	i += 1;
	str2 = malloc(i * sizeof(char));
	if (str2 != 0)
	{
		for (j = 0; j < i; j++)
		{
			str2[j] = str[j];
		}
		return (str2);
	}
	else
	{
		return (0);
	}
}
