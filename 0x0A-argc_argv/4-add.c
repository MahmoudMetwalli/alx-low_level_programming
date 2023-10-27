#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <ctype.h>

/**
 * main - entry
 * @argc: num of arguments
 * @argv: value of aruments
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
int i, sum = 0;

if (argc > 1)
{
for (i = 1; i < argc; i++)
{
if (isalpha(*argv[i]) == 0)
{
sum += atoi(argv[i]);
}
else
{
printf("Error\n");
return (1);
}
}
}
printf("%d\n", sum);
return (0);
}
