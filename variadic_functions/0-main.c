#include <stdio.h>
#include "variadic_functions.h"

/**
 * main - Entry point to test variadic functions.
 *
 * This program demonstrates the use of the `sum_them_all` function
 * by passing a variable number of arguments to calculate their sum.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	int sum;

	/* Call sum_them_all with 2 arguments and store the result */
	sum = sum_them_all(2, 98, 1024);
	/* Print the result of the first sum */
	printf("%d\n", sum);

	/* Call sum_them_all with 4 arguments and store the result */
	sum = sum_them_all(4, 98, 1024, 402, -1024);
	/* Print the result of the second sum */
	printf("%d\n", sum);

	/* Indicate successful completion of the program */
	return (0);
}

