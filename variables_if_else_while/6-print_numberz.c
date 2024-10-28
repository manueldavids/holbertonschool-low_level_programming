#include <stdio.h>
/**
 * main - Program that prints all single digit numbers of base 10
 *
 * Return: Always 0
 */
int main(void)
{
	int num;
/** for loop execution */
	for (num = 0; num < 10; num++)

		putchar(num + '0');
	
	putchar('\n');
	
	return (0);
}
