#include "main.h"


/**
 * _strlen - returns the length of a string
 * @s: string to be determined
 * Return: length of string
 */
int _strlen(char *s)
{
	int b;

	for (b = 0; *s != '\0'; s++)
	++b;
	return (b);
}
