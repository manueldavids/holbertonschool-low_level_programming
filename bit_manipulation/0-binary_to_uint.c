#include <stdio.h>

/**
 * binary_to_uint - Converts a binary string to an unsigned integer.
 * @b: Pointer to a string containing only '0' and '1' characters.
 *
 * Return: The unsigned integer value of the binary string. If:
 *         - b is NULL, or
 *         - the string contains any character other than '0' or '1',
 *         this function returns 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		/* Check if character is not '0' or '1' */
		if (b[i] != '0' && b[i] != '1')
			return (0);

		/* Shift the current result to the left by 1 bit (multiply by 2) */
		result <<= 1;

		/* Add the current bit value (0 or 1) to result */
		result += (b[i] - '0');
	}

	return (result);
}
