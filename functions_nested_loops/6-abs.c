#include "main.h"
/**
 * abs - computes absolute values 
 *
 * @r: The integer to compute the absolute value of
 *
 * Return: Absoulte value of r.
 */
int _abs(int r)
{

	if (r < 0)
	{
		return (-r);
	}
	else
	{
		return (r);
	}
}
