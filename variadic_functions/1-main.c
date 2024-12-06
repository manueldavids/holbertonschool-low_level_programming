#include "variadic_functions.h"

/**
 * main - Entry point to test the print_numbers function.
 *
 * Description: This program demonstrates the use of the `print_numbers`
 * function by passing a variable number of integers along with a separator
 * to print them in a formatted way.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	/* Call print_numbers with a separator, count, and list of integers */
	print_numbers(", ", 4, 0, 98, -1024, 402);

	/* Indicate successful completion of the program */
	return (0);
}

