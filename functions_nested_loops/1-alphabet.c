#include "main.h"
/**
 * main - function that prints the alphabet in lowercase.
 *
 * Return: Always 0.
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
