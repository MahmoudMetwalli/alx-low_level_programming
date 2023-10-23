#include "main.h"
#include <stddef.h>


/**
 * *_strchr - locates a character in a string
 * @s: string to be checked
 * @c: characterto be looked up
 * Return: pointer to first occurence or 0
 */
char *_strchr(char *s, char c)
{
	int i;
	char *p;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
		{
			p = s + i;
		}
		else
		{
			p = '\0';
		}
	}
	return (p);
}
