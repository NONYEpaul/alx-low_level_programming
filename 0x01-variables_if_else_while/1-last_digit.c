#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - program will assign a random number to the variable n
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
		printf("the last digit of %d is greater than five\n", n);
	else if (n == 0)
		printf("the last digit of %d is equal to zero\n", n);
	else if (n < 6)
		printf("the last digit of %d is less than six not zero\n", n);
	return (0);
}
