#include <stdio.h>

/**
 * main - find and prints larget prime factor
 * Return: Always 0
 */

int main(void)
{
	long number = 612852475143;
	int increment;

	while (increment++ < number / 2)
	{
		if (number % increment == 0)
		{
			number /= 2;
			continue;
		}

		for (increment = 3; increment < number / 2; increment += 2)
		{
			if (number % increment == 0)
			{
				number /= increment;
			}
		}
	}
	printf("%ld\n", number);
	return (0);
}
