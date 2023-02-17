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
		printf("Last digit of %d is %d and greater than 5\n", n, y);
	else if (y == 0)
		printf("Last digit of %d is %d and is equal to 0\n", n, y);
	else if (y < 6)
		printf("Last digit of %d is %d and is less than 6 not 0\n", n, y);
	return (0);
}
