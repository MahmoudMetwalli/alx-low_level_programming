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

	i = 0;
	while ((*(s + i) != c) && (*(s + i) != '\0'))
	{
		if (*(s + i) == c)
		{
			p = s + i;
		}	
		else
		{
			p = NULL;
		}
	}
	return (p);
}
