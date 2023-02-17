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
	int n, y;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	y = (n % 10);
	if (y > 5)
		printf("the last digit of %d is %d and greater than five\n", n, y);
	else if (y == 0)
		printf("the last digit of %d is %d and is equal to zero\n", n, y);
	else if (y < 6)
		printf("the last digit of %d is %d and is less than six not zero\n", n, y);
	return (0);
}
