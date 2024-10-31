#include "main.h"
/**
 * print_triangle - printing a triangle with #.
 *
 * @size: int used to check
 *
 * Return: void
 */
void print_triangle(int size)
{
	int a, b;

	if (size > 0)
	{
		for (a = 1; a <= size; a++)
		{
			for (b = size - a; b > 0; b--)
				_putchar(' ');

			for (b = 0; b < a; b++)
				_putchar('#');

			if (a == size)
				continue;
			_putchar('\n');
		}
	}

	_putchar('\n');
}
