#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: num
 * @index: position to be altered
 * Return: 1 if worked or -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int size;

	size = sizeof(unsigned long int) * 8 - 1;
	if (index > size)
		return (-1);
	*n = (*n | (1 << index));
	return (1);
}
