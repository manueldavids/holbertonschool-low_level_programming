#include "main.h"

/**
 * _memset - Function that fills memory with constant byte.
 * @s: pointer to me area to fill
 * @n: number byte to fill
 * @b: constant
 * Return: pointer to the memory @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int u = 0;

	for (u = 0; u < n; u++)
	{
		s[u] = b;
	}
	return (s);
}
