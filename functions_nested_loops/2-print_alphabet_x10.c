
#include "main.h"
/**
 * print_alphabetx10 - _putchar with print the lowercase abc.
 *
 * return: Always 0.
 */
void print_alphabet_x10(void)
{
	int y;
	char xor;

	for (y = 0; y < 10; y++)
	{
	for (xor = 'a'; xor <= 'z'; xor++)
	{
		_putchar(xor);
	}
		_putchar('\n');
	}
}
