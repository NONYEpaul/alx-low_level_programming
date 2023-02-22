#include"main.h"
/**
 * print_last_digit - print last digit of a number
 * @n: number to be checked
 * Return: 0
 */
int print_last_digit(int n)
{
	int lastdigit;

	lastdigit = n % 10;
	if (lastdigit < 10)
	{
		lastdigit *= -1;
	}
	_putchar(lastdigit + '0');
	return (lastdigit);
}
