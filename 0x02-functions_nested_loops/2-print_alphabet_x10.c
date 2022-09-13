#include "main.h"
/**
 *  print_alphabet_x10 - print alphabet 10 times
 */
void print_alphabet_x10(void)
{
	int i, b;
	char array[26] = "abcdefghijklmnopqrstuvwxyz";

	for (b = 0; b <= 9; b++)
	{
		for (i = 0; i <= 25; i++)
		{
			_putchar(array[i]);
		}
		_putchar('\n');
	}
}
