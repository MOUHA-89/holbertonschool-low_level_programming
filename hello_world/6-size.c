#include <stdio.h>
/**
 * main - main block
 * C program to find size of int,float,double and char data types using sizeof operator directly
 * determine and print the size of int
 * determine and imprime the size of float
 * determine and imprime the size of double
 * determine and imprime the size of char
 * Return: 0
 */
int main(void)
{
printf("Size of int: %u bytes\n", sizeof (int));
printf("Size of float: %u bytes\n", sizeof (float));
printf("Size of double: %u bytes\n", sizeof (double));
printf("Size of char: %u bytes\n", sizeof (char));
return (0);
}
