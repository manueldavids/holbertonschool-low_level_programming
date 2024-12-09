#include "main.h"

/**
 * set_bit - Sets the value of a bit at a given index to 1.
 * @n: A pointer to the number where the bit should be set.
 * @index: The index of the bit to set.
 *
 * Return: 1 if successful, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(*n) * 8)
		return (-1);

	*n = (*n | (1 << index));

	return (1);
}
