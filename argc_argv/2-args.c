#include <stdio.h>
#include "main.h"
/**
 * main - main block
 * @argc: number of arguments
 * @argv: arrea string
 * Return: 0
 */
int main(int argc, char *argv[])
{
int nombre;
for (nombre = 0; nombre < argc; nombre++)
printf("argv[%d] = %s\n", nombre, argv[nombre]);
return (0);
}
