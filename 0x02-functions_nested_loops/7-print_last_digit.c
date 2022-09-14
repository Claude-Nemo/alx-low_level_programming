#include "main.h"
/**
 * print_last_digit - Entry point
 * @n: input number as an integer.
 * Return : the last digit
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;

	_putchar(last);

	return (last);
}
