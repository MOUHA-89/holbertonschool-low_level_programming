#include "main.h"
/**
 * _puts_recursion - _puts_recursion block
 * @s: is the string
 * Return: return void
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}
_putchar(*s);
_puts_recursion(s + 1);
}
