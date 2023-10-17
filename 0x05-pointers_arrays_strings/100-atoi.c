#include "main.h"


/**
 * _atoi - convert a string to an integer
 * @s: string to be converted
 * Return: int converted
 */
int _atoi(char *s)
{
	int b, a, min, digit;
	unsigned int num = 0;
	unsigned int result;

	b = 0;
	while (*(s + b) != '\0')
	{
		b++;
	}
	min = 1;
	digit = 0;
	for (a = 0; a < b; a++)
	{
		if (*(s + a) == 45)
		{
			min = min * -1;
		}
		else if ((*(s + a) >= 48) && (*(s + a) <= 57))
		{
			num = num * 10 + (*(s + a) - 48);
			digit = 1;
		}
		else if (digit)
		{
			break;
		}
	}
	result = num * min;
	return (result);
}
