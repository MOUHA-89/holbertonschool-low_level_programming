#include "main.h"
/**
 * *_memset -  *_memset block
 * @s: is a memory area
 * @b: is a constante byte
 * @n: is a number
 * Return: return s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int a = 0;
for (a = 0; a < n; a++)
{
s[a] = b;
}
return (s);
}
