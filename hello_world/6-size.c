#include <stdio.h>
/**
 * main - C program to find size of int,float,double and char data types using sizeof operator directly
 * determine and imprime size of int: 4
 * determine and imprime the size of float: 4
 * determine and imprime the size of double: 8
 * determine and imprime the size of char: 1
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
