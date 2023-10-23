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
	int i, j;
	char *p;

	j = 0;
	while (s[j] != '\0')
	{
		j++;
	}
	for (i = 0; i <= j; i++)
	{
		if (*(s + i) == c)
		{
			p = s + i;
			break;
		}
		else
		{
			p = '\0';
		}
	}
	return (p);
}
