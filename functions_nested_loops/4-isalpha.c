#include "main.h"
/**
 * _isalpha - Checks for alphabetic charecter.
 *
 * @c: checking int
 *
 * Return: 1 if not them 0.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
