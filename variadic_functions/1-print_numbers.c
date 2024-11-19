#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The numbers of integers passed to the function.
 * @...: A variable number of strings to be printed.
 *
 * Return: if separator is NULL, don't print it.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list ap;
int num;
va_start(ap, n);
for (i = 0; i < n; i++)
{
num = va_arg(ap, int);
printf("%d", num);
if (i < n - 1 && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(ap);
}
