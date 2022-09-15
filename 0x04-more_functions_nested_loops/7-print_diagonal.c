#include "main.h"

/**
 * print_diagonal - prints lines
 * @n: input argument
*/

void print_diagonal(int n)
{
	int i = 0;
	int k = 0;

	if (n > 0)
	{
		while (i < n)
		{
			while (k < i)
			{
				_putchar(32);
				k++;
			}
			i++;
			k = 0;
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
