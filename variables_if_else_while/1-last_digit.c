#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if ((n % 10) > 5)
	{
		printf("and is greater than 5\n");
	}
	else if ((n % 10) < 6 && n % 10 != 0)
	{
		printf("and is less than 6 and not\n");
	}
	else
	{
		printf("and is 0\n");
	}
	return (0);
}
