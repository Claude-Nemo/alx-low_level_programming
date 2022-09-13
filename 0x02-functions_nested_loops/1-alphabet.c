#include "main.h"
/**
 * print_alphabet - Entry point
 *
*/
void print_alphabet(void)
{
	int i;
	char array[26] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i <= 25; i++)
	{
		_putchar(array[i]);
	}
	_putchar('\n');
}
