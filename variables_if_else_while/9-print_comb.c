#include <stdio.h>
/**
 * main - Print all possible combinations of single-digit numbers.
 *
 * Return: Always 0.
 */

int main(void)
{
	int xor;

	for (xor = 0; xor < 10; xor++)
	{
		putchar(xor + '0');
		if (xor < 9)
	{
		putchar(',');
		putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
