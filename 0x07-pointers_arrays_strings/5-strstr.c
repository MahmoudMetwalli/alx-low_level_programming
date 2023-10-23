#include "main.h"


/**
 * *_strstr -  locates a substring
 * @haystack: scanned string
 * @needle: string to be looked up
 * Return: pointr or null
 */
char *_strstr(char *haystack, char *needle)
{
	int i, k, j, l;

	i = 0;
	l = 0;
	while (needle[i] != '\0')
	{
		i++;
	}
	i = i - 1;
	for (k = 0; haystack[k] != '\0'; k++)
	{
		j = l + 0;
		if (haystack[k] == needle[j])
		{
			l++;
		}
		else
		{
			l = 0;
		}
		if (l == i)
		{
			return (haystack + ((k + 1) - l));
		}
	}
	if (haystack[0] == needle[0])
	{
		return (haystack);
	}
	return ('\0');
}
