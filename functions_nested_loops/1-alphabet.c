#include "main.h"
/**
 * print_alphabet - _putchar with print the lowercase abc.
 *
 * return: Always 0.
 */
void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar (x);
	}
	_putchar('\n');
}
