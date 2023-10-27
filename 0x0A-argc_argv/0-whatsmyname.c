#include <stdlib.h>
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
    (void)argc;              /*parameter not used*/
    printf("%s\n", argv[0]); /*prints program name*/
    return (0);              /*ends the program*/
}