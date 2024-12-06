#include "variadic_functions.h"

/**
 * main - Entry point to test the print_strings function.
 *
 * Description: This program demonstrates the use of the `print_strings`
 * function by passing a variable number of strings along with a separator
 * to print them in a formatted way.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	/* Call print_strings with a separator, count, and strings */
	print_strings(", ", 2, "Jay", "Django");

	/* Indicate successful completion of the program */
	return (0);
}

