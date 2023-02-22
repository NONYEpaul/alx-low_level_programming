#include "main.h"
/**
 * print_sign - print the sign of a number
 * @n: the int to be checked
 * Return: 1 and print + if n is greater than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
