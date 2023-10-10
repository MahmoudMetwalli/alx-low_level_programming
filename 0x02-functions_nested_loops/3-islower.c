#include "main.h"


/**
 * _islower - checks for lowercase character
 * c: ASCII value of the letter
 * Return: 0 if lowercase otherwise 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
