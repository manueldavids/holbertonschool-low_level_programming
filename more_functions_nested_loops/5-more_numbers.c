#include "main.h"
/**
 * more_numbers - Print 10 times the number, from 0 to 14.
 *
 * Reruen: void
 */
void more_numbers(void)
{
	char n, m;

	for (m = 0; m <= 9; ++m)
	{
		for (n = 0; n <= 14; ++n)
		{
			if (n > 9)
				_putchar((n / 10) + '0');
					_putchar((n % 10) + '0');
		}
		_putchar('\n');
	}
}
