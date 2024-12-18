#include "variadic_functions.h"
/**
 * print_strings - function that prints strings
 * @n: number integer
 * @separator: size of arrea
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *str;
va_list ap;
va_start(ap, n);

for (i = 0; i < n; i++)
{
str = va_arg(ap, char *);

if (!str)

str = "(nil)";

if (!separator)

printf("%s", str);

else if (separator && i == 0)

printf("%s", str);

else

printf("%s%s", separator, str);
}
va_end(ap);

printf("\n");
}

