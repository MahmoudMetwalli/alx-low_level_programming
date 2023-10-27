#include <stdio.h>
#include "main.h"

/**
 * main - entry
 * @argc: num of arguments
 * @argv: value of aruments
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
int i;

void(argc);
if (argv[1] == '\0' || argv[2] == 2)
{
printf("Error");
return (1);
}
i = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", i);
return (0);
}
