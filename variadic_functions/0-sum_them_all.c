#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: The number of parameters passed to the function.
 * @...: A variable number of parameters to calculate the sum of.
 *
 * Return: 0, if n == 0.
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
