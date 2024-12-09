#include <limits.h> /* For ULONG_MAX and possibly CHAR_BIT if needed */

/**
 * clear_bit - sets the value of a bit at a given index to 0
 * @n: pointer to the unsigned long int whose bit is to be cleared
 * @index: the bit index to clear (starting from 0)
 *
 * Return: 1 if the operation succeeded, or -1 on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;
	/* Check if index is out of range for an unsigned long int. */
	if (index >= sizeof(unsigned long int) * CHAR_BIT)
		return (-1);

	/* Create a mask that has a 0 at the desired bit and 1s elsewhere. */
	mask = ~(1UL << index);

	/* Use bitwise AND to clear the bit. */
	*n &= mask;

	return (1);
}
