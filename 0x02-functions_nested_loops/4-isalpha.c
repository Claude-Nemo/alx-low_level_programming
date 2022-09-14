#include "main.h"
/**
 * _isalpha - Entry point
 * @c: input ascii code argument
 * Return: 1 for uppercase, 0 otherwise
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
