#include "main.h"
/**
 * print_line - Draws a straight line in the terminal.
 *
 * @n: int used to check
 *
 * Return: void
 */
void print_line(int n)
{
	int a;

	if (n > 0)
	{
		for (a = 0; a < n; ++a)
			_putchar('_');
	}
	_putchar('\n');
}
