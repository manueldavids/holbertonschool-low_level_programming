#include "main.h"

/**
 * _is_prime_helper - Helper function to check if a number is prime
 * @n: The number to check
 * @i: The current divisor to check
 *
 * Return: 1 if n is a prime number, 0 otherwise
 */
int _is_prime_helper(int n, int i)
{
	if (i * i > n)
		return (1);
	if (n % i == 0)
		return (0);
	return (_is_prime_helper(n, i + 1));
}

/**
 * is_prime_number - Checks if a number is a prime number
 * @n: The number to check
 *
 * Return: 1 if n is a prime number, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_is_prime_helper(n, 2));
}
