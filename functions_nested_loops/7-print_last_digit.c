#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 *
 * @num: value of the int
 *
 * Return: 0
 */
int print_last_digit(int num)
{
	int mun = num % 10;

	if (mun < 0)

		mun *= -1;

	_putchar(mun + '0');

	return (mun);
}
