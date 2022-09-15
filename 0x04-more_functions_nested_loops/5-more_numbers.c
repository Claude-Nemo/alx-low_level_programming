#include "main.h"
/**
 * more_numbers - print numbers 0-14 10x
 */
void more_numbers(void)
{
	int i = 0;
	int count = 0;

	while (count <= 9)
	{
		while (i <= 14)
		{
			if (i > 9)
			{
				_putchar(i / 10 + 48);
			}
			_putchar(i % 10 + 48);
			i++;
		}
		_putchar('\n');
		count++;
		i = 0;
	}
}
