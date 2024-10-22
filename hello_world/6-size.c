#include <stdio.h>
/**
 * main - main block
 * size of int: 4
 * size of float: 4
 * size of double: 8
 * size of char: 1
 * Return: 0
 */
int main(void)
{
printf("Size of int: %u bytes\n", sizeof(int));
printf("Size of float: %u bytes\n", sizeof(float));
printf("Size of double: %u bytes\n", sizeof(double));
printf("Size of char: %u bytes\n", sizeof(char));
return (0);
}
