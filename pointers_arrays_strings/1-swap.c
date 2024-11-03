#include "main.h"

/**
 * swapt_int - swap two integers
 * @a: first integer
 * @b: second integer
 * Return: nothing
 */

void swapt_int(int *a, int *b)
{
	int swap = *a;
	*a = *b;
	*b = swap;
}
