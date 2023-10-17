#include "main.h"


/**
 * _atoi - convert a string to an integer
 * @s: string to be converted
 * Return: int converted
 */
int _atoi(char *s)
{
	int b, a, num, min, result;

	b = 0;
	while (*(s + b) != '\0')
	{
		b++;
	}
	num = 0;
	min = 1;
	for (a = 0; a < b; a++)
	{
		if (*(s + a) == 45)
		{
			min = min * -1;
		}
		if ((*(s + a) >= 48) && (*(s + a) <= 57))
		{
			num = num * 10 + (*(s + a) - 48);
		}
	}
	result = num * min;
	return (result);
}
