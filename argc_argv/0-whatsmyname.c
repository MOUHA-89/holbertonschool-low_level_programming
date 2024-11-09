#include <stdio.h>
#include "main.h"
/**
 * main - main block
 * @argc: number of arguments
 * @argv: is a arrea string
 * Return: 0
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
int nombre = 0;
if (nombre < argc)
printf("argv[%d] = %s\n", nombre, argv[nombre]);

return (0);
}
