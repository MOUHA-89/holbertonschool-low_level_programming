#include "main.h"
/**
 * _strlen - _strlen bloc
 * @s: is a number
 * Return: return void
 */
int _strlen(char *s)
{
int length = 0;
while (s[length] != '\0')
length++;
return (length);
}
