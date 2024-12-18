#include "variadic_functions.h"
/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: is a number
 * Return: return sum
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
int sum = 0;
va_list ap;

va_start(ap, n);

for (i = 0; i < n; i++)
{
sum += va_arg(ap, int);
}
va_end(ap);
return (sum);
}
