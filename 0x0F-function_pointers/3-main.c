#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - prints out the reuslt of operation
 * @argc: num of arguments
 * @argv: value of argument
 * Return: int
 */
int main(int argc, char **argv)
{
	int (*oprt)(int, int);
	int a, b, c;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	oprt = get_op_func(argv[2]);
	if (oprt == NULL)
	{
		printf("Error\n");
		exit(100);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	c = oprt(a, b);
	printf("%i\n", c);
	return (0);
}
