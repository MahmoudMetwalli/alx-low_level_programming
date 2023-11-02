#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: num of elemnts
 * @size: size of elemnts
 * Return: pointer or null
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *s;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (0);
	}
	s = malloc(nmemb * size);
	if (s == 0)
	{
		return (0);
	}
	while (i < nmemb * size)
	{
		s[i] = 0;
		i = i + 4;
	}
	return (s);
}
