#include "main.h"
/**
 * clear_bit - function that sets the value of a bit to 0
 * @n: binary number
 * @index: bit index to get
 * Return: 0
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 0))
	{
		return (-1);
	}
	else
	{
		*n &= ~(1 << index);
	}
	return (1);
}
