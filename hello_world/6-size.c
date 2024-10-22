#include <stdio.h>
/**
 * main - C program to find size of int,float,double and char data types using sizeof operator directly
 * the size of int: 4
 * the size of float: 4
 * the size of double: 8
 * the size of char: 1
 * Return: 0
 */
int main(void)
{
putchar("Size of int: %u bytes\n", sizeof (int));
putchar("Size of float: %u bytes\n", sizeof (float));
putchar("Size of double: %u bytes\n", sizeof (double));
putchar("Size of char: %u bytes\n", sizeof (char));
return (0);
}
