#include "main.h"
#include <stdio.h>
/**
 * main -  prints the sum of all the multiples of 3 or 5 below 1024
 * Return: 0
 */
int main(void)
{
	int n, x = 0;

	while (n < 1024)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
		{
			x += n;
		}
		n++;
	}
	printf("%d\n", x);
	return (0);
}
