#include "main.h"

/**
 * set_bit - sets the value of a bit to 1
 * @n: binary number
 * @index: index of bit to set
 * Return: 0
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 9))
	{
		return (-1);
	}
	else
	{
		(*n |= 1 << index);
	}
	return (1);
}
