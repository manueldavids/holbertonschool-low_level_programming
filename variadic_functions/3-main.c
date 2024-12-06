#include "variadic_functions.h"

/**
 * main - Entry point to test the print_all function.
 *
 * Description: This program demonstrates the use of the `print_all` function,
 * which prints various data types passed as arguments, using a format string
 * to specify their types. It passes characters, integers, and strings to
 * print them in a formatted way.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	/* Call print_all with a format string and a variable number of arguments */
	print_all("ceis", 'B', 3, "stSchool");

	/* Indicate successful completion of the program */
	return (0);
}

