#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The unsigned long integer from which the bit will be extracted.
 * @index: The index of the bit to retrieve (starting from 0).
 *
 * Return: The value of the bit at the specified index (0 or 1),
 *         or -1 if the index is out of bounds.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	/* Check if the index is out of bounds*/
	if (index >= sizeof(n) * 8)
		return (-1);

	/* Right shift the number by 'index' positions and apply AND with 1*/
	return ((n >> index) & 1);
}
