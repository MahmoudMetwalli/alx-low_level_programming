#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: num
 * @index: postition to be changed
 * Return: 1 on success and -1 on failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
		unsigned int size;

	size = sizeof(unsigned long int) * 8 - 1;
	if (index > size)
		return (-1);
	*n = (*n & ~(1 << index));
	return (1);
}
