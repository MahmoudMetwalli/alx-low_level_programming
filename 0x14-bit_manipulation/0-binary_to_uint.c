#include "main.h"
#include <stdio.h>
/**
 * _strlen - returns the length of a string
 * @s: string to be determined
 * Return: length of string
 */
int _strlen(const char *s)
{
	int b;

	for (b = 0; s[b] != '\0'; b++)
	;
	return (b);
}
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: string which stores the binary num
 * Return: equivalent unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int len, index = 0, power_limit, power, factor, value;
	unsigned int num = 0;

	if (!b)
		return (0);
	len = _strlen(b);
	power_limit = len - 1;
	while (power_limit >= 0)
	{
		if (b[index] == '0' || b[index] == '1')
		{
			power = 0;
			factor = 1;
			value = 0;
			while (power < power_limit)
			{
				factor *= 2;
				power++;
			}
		}
		else
			return (0);
		value = (b[index] - '0') * factor;
		num += value;
		power_limit--;
		index++;
	}
	return (num);
}
