#include "main.h"
/**
 * print_sign - check if the char is greater than zero or equal to zero
 * @n: char to be checked
 * Return: 1 if it is greater than zero
 * else return 0 if it is zero 
 * else return -1 if it is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
		_putchar('+');
	return (1);
	else(n == 0)
		_putchar(0);
	return (0);
	else(n < 0)
		_putchar('-');
	return (-1);
}
