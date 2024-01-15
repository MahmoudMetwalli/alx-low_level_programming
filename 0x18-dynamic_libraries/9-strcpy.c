#include "main.h"


/**
 * *_strcpy -  function that copies the string pointed to
 * @dest: string to be copied into
 * @src: string to be copied from
 * Return: point to dest
 */
char *_strcpy(char *dest, char *src)
{
	int b, q;

	b = 0;
	while (*(src + b) != '\0')
	{
		b++;
	}
	q = 0;
	while (q <= b)
	{
		*(dest + q) = *(src + q);
		q++;
	}
	return (dest);
}
