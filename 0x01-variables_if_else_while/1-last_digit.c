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
	int n, y_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	y_digit = (n % 12);
	if (y_digit > 5)
		printf("the last digit of %d is %d and is greater than five\n", n, y_digit);
	else if (y_digit == 0)
		printf("the last digit of %d is %d and is equal to zero\n", n, y_digit);
	else if (y_digit < 6, != 0)
		printf("the last digit of %d is %d and less than six not zero\n", n, y_digit);
	return (0);
}
