#include "main.h"


/**
 * *_memset -  fills memory with a constant byte
 * @s: array to be filled
 * @b: contant byte
 * @n: are to be filled
 * Return: filled array
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	if (n > 0)
	for (i = 0; i <= n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
