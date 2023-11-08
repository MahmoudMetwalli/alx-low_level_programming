#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
/**
 * op_add - returns the sum of a and b
 * @a: int
 * @b: int
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	int i = a + b;

	return (i);
}
/**
 * op_sub - returns the difference of a and b
 * @a: int
 * @b: int
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	int i = a - b;

	return (i);
}
/**
 * op_mul - returns the product of a and b
 * @a: int
 * @b: int
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	int i = a * b;

	return (i);
}
/**
 * op_div - returns the result of the division of a by b
 * @a: int
 * @b: int
 * Return: result of the division of a and b
 */
int op_div(int a, int b)
{
	int i;

	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	i = a / b;
	return (i);
}
/**
 * op_mod - returns the remainder of the division of a by b
 * @a: int
 * @b: int
 * Return: remainder of division of a and b
 */
int op_mod(int a, int b)
{
	int i;

	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	i = a % b;
	return (i);
}
