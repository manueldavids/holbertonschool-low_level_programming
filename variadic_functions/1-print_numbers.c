#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: A variable number of integers to be printed.
 *
 * Description: This function takes a variable number of integers
 * and prints them separated by the given string. If the separator
 * is `NULL`, it is not printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i; /* Index for iterating through the arguments */
	va_list ap;     /* List to hold the variable arguments */
	int num;        /* Variable to hold each integer */

	/* Initialize the va_list to access the variable arguments */
	va_start(ap, n);

	/* Loop through all the integers passed to the function */
	for (i = 0; i < n; i++)
	{
		/* Retrieve the next integer from the argument list */
		num = va_arg(ap, int);

		/* Print the integer */
		printf("%d", num);

		/* Print the separator if not NULL and not the last number */
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}

	/* Print a newline at the end */
	printf("\n");

	/* Clean up the va_list */
	va_end(ap);
}

