#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - duplicates a string
 * @str: the string to duplicate
 * Return: NULL if str = Null
 */
char *_strdup(char *str)
{
char *lol;
int r;
int i;
if (str == NULL)

return (NULL);

while (str[r] != '\0')
	r++;
lol = (char *) malloc((r + 1) * sizeof(char));

if (lol == NULL)

return (NULL);

for (i = 0; i < r; i++)

lol[i] = str[r];

lol[i] = '\0';

return (lol);
}
