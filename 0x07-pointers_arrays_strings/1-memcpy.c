#include "main.h"


/**
 * *_memcpy - opies memory area
 * @dest: memory area to be copied into
 * @src: memory are to be copied from
 * @n: area to be copied
 * Return: area processed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	n = n - 1;
	for (i = 0; i <= n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
