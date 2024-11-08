#include "main.h"
/*
 * _putchar_recursion - Prints a string with a new line
 * @s: char
 * return: void
 */

void _puts_recursion(char *s)
{
	if(*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
