#include "main.h"
/**
 * *_memcpy - *_memcpy block
 * @dest: is a variable
 * @src: is a variable
 * @n: is a number
 * Return: return dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int a;


for (a = 0; a < n; a++)
{

	dest[a] = src[a];
}
return (dest);


}
