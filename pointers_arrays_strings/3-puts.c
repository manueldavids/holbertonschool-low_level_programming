#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string followed by a new line to stdout.
 * @str: Pointer to the string to be printed.
 *
 * Description: This function iterates through each character in
 * the string, printing each one until it reaches the
 * null terminator ('\0'). A newline is added after
 * the string.
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
