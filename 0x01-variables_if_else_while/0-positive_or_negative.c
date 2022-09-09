#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/** 
 * main - assigns a random number to the variable n each time it is executed
 *prints whether the number entered is positive or negative
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if (n < 0)
	{
		printf("%d is a negative number\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is a positive number\n", n);
	}
	return (0);
}
