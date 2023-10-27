#include "main.h"


/**
 * _strlen_recursion - returns the length of a string.
 * @s: string to be measured
 * Return: lenght of string
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}