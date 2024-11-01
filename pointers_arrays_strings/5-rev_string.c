#include "main.h"
/**
 * rev_string - rev_string block
 * @s:is a size
 * Return: return void
 */
void rev_string(char *s)
{
char temp = s[0];
int a = 0;
int b;
while (s[a] != '\0')
{
a++;
}
for (b = 0; b < a ; b++)
{
a--;
temp = s[a];
s[a] = s[b];
s[b] = temp;
}
}
