#include "main.h"
#include <stdio.h>
/**
 * swap_int - swap_int block
 * @a: is a number
 * @b: is a number
 * Return: return void
 */
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
