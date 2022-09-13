#include "main.h"

/**
 * main - calls the print alphabet function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	print_alphabet();
	return (0);
}
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
