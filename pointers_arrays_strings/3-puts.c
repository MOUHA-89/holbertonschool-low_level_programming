#include "main.h"
/**
 * _puts -  _puts block
 * @str: is a size
 * Return: return void
 */
void _puts(char *str)
{
int a;
if (str > 0)
for (a = 0; a < str; a++)
{
_putchar('a');

putchar('\n');
}
}

