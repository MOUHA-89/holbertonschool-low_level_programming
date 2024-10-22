#include <stdio.h>
/**
 * main - main block
 * Size of int: 4 bytes
 * Size of float: 4 bytes
 * Size of a long long int: 8 bytes
 * Size of a long int: 4 bytes
 * Size of char: 1 byte
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
