#include "main.h"


/**
 * *_strcat - concatenates two strings
 * @dest: first string
 * @src: second string
 * Return: a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int a, b, c;

	a = 0;
	while (*(dest + a) != '\0')
	{
		a++;
	}
	b = 0;
	while (*(src + b) != '\0')
	{
		b++;
	}
	c = a + b - 1;
	char e[c];

	f = 0;
	while (f < a)
	{
		*(e + f) = *(dest + f);
		f++;
	}
	g = 0;
	while (f <= c)
	{
		*(e + f) = *(src + g);
		f++;
		g++;
	}
	return (*e);
}
