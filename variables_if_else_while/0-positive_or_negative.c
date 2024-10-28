#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	while (n > 0)
{

	printf("%d possitive\n", n);
}
	if (n == 0)
{

	printf("%d cero\n");
}
	if (n < 0)
{

	printf("%d negative\n");
}
	return (0);
}
