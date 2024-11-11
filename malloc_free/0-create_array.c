#include "main.h"
#include <stdlib.h>
/**
 * *create_array - creats an array of specified size and assign char
 * @size: size of array
 * @c char to be assigned
 * Description: creates array of size int and assign char c
 * Return: NULL if the size is o
 */
char *create_array(unsigned int size, char c)
{
char *p;
unsigned int i;

p = (char *) malloc(sizeof(char) * size);

if (size == 0 || p == NULL)
return (NULL);

for (i = 0; i < size; i++)
p[i] = c;
return (p);

}
