#include <stdio.h>
/**
 * times_table - Entry point
 *
 */
void times_table(void)
{
	int n, i, m;

	for (n = 0; n != 10; n++)
	{
		for (i = 0; i != 10; i++)
		{
			m = n * i;
			if (i < 9)
				printf("%d, ", m);
			else
				printf("%d", m);
		}
		printf("\n");
	}
}
