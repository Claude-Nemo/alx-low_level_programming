#include "main.h"
/**
 * times_table - Entry point
 *
 */
void times_table(void)
{
	int n, i, m;

	for (n = 0; n <= 9; n++)
	{
		_putchar(48);
		for (i = 1; i <= 9; i++)
		{
			m = n * i;
			_putchar(44);
			_putchar(32);
			if (m <= 9)
			{
				_putchar(32);
				_putchar(m + '0');
			}
			else
			{
				_putchar((m / 10) + '0');
				_putchar((m % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
