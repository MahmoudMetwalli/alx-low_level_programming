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
	num = 0;
	for (a = 0; a < b; a++)
	{
		while ((*(s + a) >= 48) && (*(s + a) <= 57))
		{
			num = num * 10 + (*(s + a) - 48);
		}
	}
	for (a = 0;a < b; a++)
	}
		while (*(s + a) == 45)
		{
			num = num * -1;
		}
	}
	return (num);
}
