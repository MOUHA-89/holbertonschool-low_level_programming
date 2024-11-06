#include "main.h"
/**
 * _puts_recursion - _puts_recursion block
 * @s: is the string
 * Return: return void
 */
void _puts_recursion(char *s)
{
int x;
for (x = 0; s[x] != '\0'; x++)
{
_putchar(s[x]);
}
_putchar('\n');
}
