#include "main.h"

/**
 * string_toupper - changing string to upper function
 * @strs : string pointer
 * Return: strs.
 */

char *string_toupper(char *strs)
{
	int a;

	for (a = 0; strs[a] != '\0'; a++)
	{
		if (strs[a] >= 'a' && strs[a] <= 'z')
		{
			strs[a] = strs[a] - 32;
		}
	}
	return (strs);
}
