#include "main.h"
#include <stdlib.h>

/**
 * *create_array -  creates an array of chars, and initializes it
 * @size: size of array
 * @c: characer to initilize the array
 * Return: NULL or a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ac;

	if (size <= 0)
	{
		return (0);
	}
	ac = malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
	{
		ac[i] = c;
	}
	return (ac);
}
