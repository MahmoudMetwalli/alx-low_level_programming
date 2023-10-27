#include "main.h"
#include <stdio.h>

/**
* _atoi - Write a function that convert a string to an integer.
* @string: The input string to be converted to an integer.
* Return: The integer value extracted from the string.
*/
int _atoi(char *string)
{
	short digit_found;
	int sign, result;

	sign = result = digit_found = 0;
	sign = -1;

	while (*string != '\0')
	{
		if (*string == '-')
		{
			sign *= -1;
		}

		if (*string >= '0' && *string <= '9')
		{
			result *= 10;
			result -= (*string - '0');
			digit_found = 1;
		}
		else if (digit_found == 1)
			break;
		string++;
	}
	result *= sign;
	return (result);
}
