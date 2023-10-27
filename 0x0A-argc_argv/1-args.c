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
(void)*argv;/*not used variable*/
printf("%d\n", argc - 1);/*prints num of arguemnts passed*/
return (0);/*return 0*/
}
