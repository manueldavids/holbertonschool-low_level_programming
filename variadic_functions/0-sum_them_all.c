#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - Calculates the sum of all its parameters.
 * @n: The number of parameters passed to the function.
 * @...: A variable number of arguments to calculate the sum of.
 *
 * Description: This function uses variadic arguments to calculate the
 * sum of all its parameters. If no parameters are provided (`n == 0`),
 * the function returns 0.
 *
 * Return: The sum of all parameters. If `n == 0`, returns 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i; /* Index for iterating through arguments */
	int sum = 0;    /* Variable to store the sum of the parameters */
	va_list ap;     /* Variable to hold the list of variadic arguments */

	/* Initialize the va_list with the last fixed parameter */
	va_start(ap, n);

	/* Iterate through the arguments and calculate their sum */
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int); /* Add the next argument to the sum */
	}

	/* Clean up the va_list after use */
	va_end(ap);

	/* Return the calculated sum */
	return (sum);
}
