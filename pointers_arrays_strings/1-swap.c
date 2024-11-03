#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the value
 * @a: Pointer to an int that will be swapped
 * @b: Pointer to an int that will be swapped
 *
 * Description: This functions takes a pointer to an int and swap
 * the value it points to tmp
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
