#include <stdio.h>
/**
 * main - print the alphabet except e, q
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int i;
	char array[26] = "abcdfghijklmnoprstuvwxyz";

	for (i = 0; i <= 25; i++)
	{
		putchar(array[i]);
	}
	putchar('\n');
	return (0);
}
