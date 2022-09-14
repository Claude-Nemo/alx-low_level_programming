#include "main.h"
/**
 * _islower - Entry point
 * @c: input ascii code argument
 * Return: 1 for lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
