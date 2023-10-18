#include "main.h"


/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: comparison result
 */
int _strcmp(char *s1, char *s2)
{
	int a, b, d, e;

	b = 0;
	d = 0;
	for (a = 0; s1[a] != '\0' || s2[a] != '\0'; a++)
	{
		b = b + s1[a];
		d = d + s2[a];
	}
	e = b - d;
	return (e);
}

