#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - that allocates memory using malloc
 * @b: size of memory allocated
 * Return: Pointer or 98
 */
void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	else
	{
		return (p);
	}
}
