#include "main.h"
/**
 * _puts -  _puts block
 * @str: is a string
 * Return: return void
 */
void _puts(char *str)
{
int a = 0;
while (str[a] != '\0')
{
_putchar(str[a]);
a++;
}

_putchar('\n');
}

