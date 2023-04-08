#include "main.h"
/**
 * get_bit - function that returns the value of a bit
 * @n: binary number
 * @index: index to get
 * Return: 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 9))
	{
		return (-1);
	}

	else
	{
		return ((n >> index) & 1);
	}
}
