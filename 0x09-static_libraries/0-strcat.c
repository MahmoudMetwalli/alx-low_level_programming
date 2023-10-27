#include "main.h"
#include <stddef.h>


/**
 * *_strcat - concatenates two strings
 * @dest: first string
 * @src: second string
 * Return: a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	size_t a, b;

	a = 0;
	while (*(dest + a) != '\0')
	{
		a++;
	}
	b = 0;
	while (*(src + b) != '\0')
	{
		*(dest + (a + b)) = *(src + b);
		b++;
	}
	*(dest + (a + b)) = '\0';
	return (dest);
}
