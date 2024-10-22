#include <stdio.h>
/**
 * main - main block
 * Size of int: 4
 * Size of float: 4
 * Size of a long long int: 8
 * Size of a long int: 4
 * Size of char: 1
 * Return: 0
 */
int main(void)
{
printf("Size of int: %u bytes\n", sizeof(int));
printf("Size of float: %u bytes\n", sizeof(float));
printf("Size of long long: %u bytes\n", sizeof(long long));
printf("Size of long int: %u bytes\n", sizeof(long int));
printf("Size of char: %u bytes\n", sizeof(char));
return (0);
}
