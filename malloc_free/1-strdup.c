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
char *kel;
int r;
int i;
if (str == NULL)

return (NULL);

while (str[r] != '\0')
	r++;
kel = (char *) malloc((r + 1) * sizeof(char));

if (kel == NULL)

return (NULL);

for (i = 0; i < r; i++)

kel[i] = str[r];

kel[i] = '\0';

return (kel);
}
