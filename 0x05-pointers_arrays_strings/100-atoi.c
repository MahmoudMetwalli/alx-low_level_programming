#include "main.h"


/**
 * _atoi - convert a string to an integer
 * @s: string to be converted
 * Return: int converted
 */
int _atoi(char *s)
{
	int b, a;

	b = 0;
	while (*(s + b) != '\0')
	{
		b++;
	}
	a = 0;
	if (*s = 45)
	{
		*s = -;
	}
	while (a < b)
	{
		*(s + a)=(*(s + a) - 48);
		a++;
	}
	*(s + b)='';
	return (*s);
}
