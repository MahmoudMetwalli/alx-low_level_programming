#include "main.h"


/**
 * _atoi - convert a string to an integer
 * @s: string to be converted
 * Return: int converted
 */
int _atoi(char *s)
{
	int b, a, num;

	b = 0;
	while (*(s + b) != '\0')
	{
		b++;
	}
	a = 0;
	while (a < b)
	{
		num = num *10 + (*(s + a) - 48);
		a++;
	}
	return (num);
}
