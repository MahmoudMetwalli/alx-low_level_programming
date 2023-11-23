#include "main.h"
/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: num to be returned
 * @index: index to be presented
 * Return: int to print
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int i;
	unsigned int size;

	size = sizeof(n) * 8 - 1;
	if (index > size)
		return (-1);
	i = ((n >> index) & 1);
	return (i);
}
