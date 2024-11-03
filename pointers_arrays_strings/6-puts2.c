#include "main.h"
#include <stdio.h>

/**
 * puts2 - Prints every other character of a string,
 * starting with the first character, followed by a new line.
 *
 * @str: Pointer to the string to be printed.
 *
 * Description: This function iterates through the given string and
 * prints only the characters at even indices, effectively
 * skipping every other character. it begins with the first
 * character and continues until the end of the string
 * appending a newline at the end.
 */
void puts2(char *str)
{
	int count = 0;

	while (str[count] != '\0')
	{
		if (count % 2 == 0)
		{
			_putchar(str[count]);
		}
		count++;
	}
	_putchar('\n');
}
