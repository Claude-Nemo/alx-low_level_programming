#include "main.h"

/**
 * print_square - prints in a square
 * @size: input argument
*/

void print_square(int size)
{
	int i = 0;
	int k = 0;

	if (size > 0)
	{
		while (i < size)
		{
			while (k < size)
			{
				_putchar(35);
				k++;
			}
			i++;
			k = 0;
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
