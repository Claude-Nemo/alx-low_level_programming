#include <stdio.h>
/**
 * main - print the alphabet in reverse
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int i;
	char array[26] = "zyxwvutsrqponmlkjihgfedcba";

	for (i = 0; i <= 25; i++)
	{
		putchar(array[i]);
	}
	putchar('\n');
	return (0);
}
