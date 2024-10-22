#include <stdio.h>
/**
 * main - main block
 * Size of a char: 1 byte(s)
 * Size of an int: 4 byte(s)
 * Size of a long int: 8 byte(s)
 * Size of a long long int: 8 byte(s)
 * Size of a float: 4 byte(s)
 * Return: i0
 */
int main(void)
{
printf("Size of a char: %lu bytes\n", sizeof(char));
printf("Size of an int: %lu bytes\n", sizeof(int));
printf("Size of a long int: %lu bytes\n", sizeof(long int));
printf("Size of a long long int: %lu bytes\n", sizeof(long long int));
printf("Size of a float: %lu bytes\n", sizeof(float));
return (0);
}
