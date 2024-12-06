#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The string to be printed between strings.
 * @n: The number of strings passed to the function.
 * @...: A variable number of strings to be printed.
 *
 * Description: This function takes a variable number of string arguments
 * and prints them, separated by the specified delimiter. If the separator
 * is `NULL`, it is skipped. If any string is `NULL`, "(nil)" is printed
 * instead of the string.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;      /* List to hold the variable arguments */
	char *str;            /* Pointer to store each string */
	unsigned int index;   /* Loop index */

	/* Initialize the va_list to access the variable arguments */
	va_start(strings, n);

	/* Iterate through the list of strings */
	for (index = 0; index < n; index++)
	{
		/* Get the next string argument */
		str = va_arg(strings, char *);

		/* Check if the string is NULL and handle it */
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		/* Print the separator if it is not NULL and not the last string */
		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	/* Print a newline at the end of the output */
	printf("\n");

	/* Clean up the va_list after use */
	va_end(strings);
}

