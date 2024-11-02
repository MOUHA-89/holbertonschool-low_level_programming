#include "main.h"
/**
 * puts2 - puts2 block
 * @str: is a size
 * Return: return void
 */
void puts2(char *str)
{
char *y = str;
int a = 0;
int b = 0;
int c;
while (*y != '\0')
{
y++;
a++;
}
b = a - 1;
for (c = 0; c <= b; c++)
{
if (0 % 2 == 0)
{
_putchar(str[c]);
}
_putchar('\n');
}
}
