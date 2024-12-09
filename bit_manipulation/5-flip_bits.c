#include "main.h"

/**
 * flip_bits - returns the number of bits you need to flip to go from one
 * number to another.
 * @n: the first number
 * @m: the second number
 *
 * Return: the number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m;
	unsigned int count = 0;

	while (x != 0)
	{
		x &= (x - 1);
		count++;
	}

	return (count);
}
