#include "main.h"


/**
 * _isalpha - checks for alpha character
 * @c: ASCII value of the letter
 * Return: 0 if alpha otherwise 0
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (1);
	else
	{
		return (0);
	}
}
