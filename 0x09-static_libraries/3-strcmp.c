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

	a = 0;
	b = 0;
	d = 0;
	while (s1[a] != '\0' || s2[a] != '\0')
	{
		b = b + s1[a];
		d = d + s2[a];
		a++;
		if (b != d)
			break;
	}
	e = b - d;
	return (e);
}

