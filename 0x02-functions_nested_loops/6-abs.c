#include "main.h"
/**
 * _abs - Entry point
 * @n: input argument integer
 * Return: absolute integer
 */
int _abs(int n)
{
	int v;

	if (n < 0)
	{
		v = -n;
		return (v);
	}
	else
	{
		v = n;
		return (v);
	}
}
