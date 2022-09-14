#include "main.h"
/**
 * print_last_digit - Entry point
 * @n: input number as an integer.
 * Return: 0
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (n < 0)
	{
		n = n * -1;
		_putchar(last + '0');
		return (last);
	}
	else
	{
		_putchar(last + '0');
		return (last);
	}
}
