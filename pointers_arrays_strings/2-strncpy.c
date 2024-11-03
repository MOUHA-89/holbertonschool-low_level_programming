#include "main.h"
/**
 * _strncpy - _strncpy block
 * @dest: is a varaiable
 * @src: is a variable
 * @n: is a number
 * Return: return dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int a = 0;

while (src[a] != '\0' && a < n)
{
dest[a] = src[a];
a++;
}
while (a < n)
{
dest[a] = '\0';
a++;
}
return (dest);
}
