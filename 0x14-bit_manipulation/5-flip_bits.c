#include "main.h"
/**
 * flip_bits - returns the number of bits needed to flip
 * @m: first number of flip
 * @n: second number of flip
 * Return: 0
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits = 0;

	while (xor > 0)
	{
		bits = bits + (xor & 1);
		xor >>= 1;
	}
	return (bits);
}
