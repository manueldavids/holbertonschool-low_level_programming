#include <stdio.h>
/**
 * main - Program that prints the lowercase alphabet in reverse
 *
 * Return: Always 0.
 */
int main(void)
{
	char xa;
		for (xa = 'z'; xa >= 'a'; xa--)
		{
			putchar(xa);
		}
		putchar('\n');

		return (0);
}
