#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to flip
 * @n: num 1
 * @m: num 2
 * Return: num of bit flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int l;
	unsigned int flip = 0;
	int i, slot;

	l = n ^ m;
	for (slot = sizeof(n) * 8 - 1; slot >= 0; slot--)
	{
		i = ((l >> slot) & 1);
		if (i == 1)
			flip += 1;
	}
	return (flip);
}
