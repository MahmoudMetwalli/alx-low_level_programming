#include "main.h"


/**
 * *_strstr -  locates a substring
 * @haystack: scanned string
 * @needle: string to be looked up
 * Return: pointr or null
 */
char *_strstr(char *haystack, char *needle)
{
	int i, k, l;

	i = 0;
	while (needle[i] != '\0')
	{
		i++;
	}
	for (k = 0; haystack[k] != '\0'; k++)
	{
		if (haystack[k] == needle[0])
		{
			for (l = 0; l < i; l++)
			{
				if (haystack[k + l] == needle[l])
				{
					return (haystack + k);
				}
				else
				{
					break;
				}
			}
		}
	}
	return ('\0');
}
