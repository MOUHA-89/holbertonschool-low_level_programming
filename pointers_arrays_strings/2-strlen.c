#include "main.h"
/**
 * _strlen - _strlen bloc
 * @s: is a number
 * Return: return length
 */
int _strlen(char *s)
{
int length = 0;
while (*s != '\0')
length++;
s++;
return (length);
}
