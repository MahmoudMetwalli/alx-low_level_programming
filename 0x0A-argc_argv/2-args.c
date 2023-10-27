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

for (i = 0; i < argc; i++)
{
pritnf("%s\n", argv[i]);
}
return (0);
}
