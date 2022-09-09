#include <stdio.h>
/**
 *main - print the alphabet in lower & uppercase
 *
 *Return: Always 0 (Success)
*/
int main(void)
{
	int i;
	char array1[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	for (i = 0; i <= 51; i++)
	{
		putchar(array1[i]);
	}
	putchar('\n');
	return (0);
}
