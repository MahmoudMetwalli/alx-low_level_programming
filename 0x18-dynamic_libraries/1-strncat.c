#include "main.h"


/**
 * *_strncat - concatenates two strings
 * @dest: first string
 * @src: second string
 * @n: maximum letters
 * Return: a pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;
	while (*(dest + a) != '\0')
	{
		a++;
	}
	b = 0;
	while (*(src + b) != '\0' && b < n)
	{
		*(dest + (a + b)) = *(src + b);
		b++;
	}
	*(dest + (a + b)) = '\0';
	return (dest);
}
