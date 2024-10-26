#include "main.h"

/**
 * print_sign - controls
 * n:is a number
 * Return:  0
 */
int print_sign(int n)
{
if (n > 0)
{	
putchar(+);
return: 1;
}
if (n == 0)
{
putchar(0);
return: 0;
}
if (n < 0)
{
putchar(-);
return: -1;
}
