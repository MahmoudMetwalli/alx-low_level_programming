#include "main.h"


/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: comparison result
 */
int _strcmp(char *s1, char *s2)
{
	int a, b, c, d, e;

	b = 0;
	for (a = 0; *(s1 + a) != '\0'; a++)
	{
		b = b + *(s1 + a);
	}
	d = 0;
	for (c = 0; *(s2 + c) != '\0'; c++)
	{
		d = d + *(s2 + c);
	}
	e = b - d;
	return (e);
}

