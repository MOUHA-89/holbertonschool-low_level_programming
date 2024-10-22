#include <stdio.h>
/**
 * main - main block
 * Size of an int: 4 bytes
 * Size of a float: 4 bytes
 * Size of a long long int: 8 bytes
 * Size of a long int: 4 bytes
 * Size of a char: 1 byte
 * Return: 0
 */
int main(void)
{
printf("Size of an int: %lu bytes\n", sizeof(int));
printf("Size of a float: %lu bytes\n", sizeof(float));
printf("Size of a long long int: %lu bytes\n", sizeof(long long int));
printf("Size of a long int: %lu bytes\n", sizeof(long int));
printf("Size of a char: %lu bytes\n", sizeof(char));
return (0);
}
