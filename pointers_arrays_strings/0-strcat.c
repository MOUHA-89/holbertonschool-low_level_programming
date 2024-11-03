#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @src: String that will be appended
 * @dest: String to be concatenated upon
 * Return: a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
