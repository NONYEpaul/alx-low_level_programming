#include "main.h"
/**
 * binary_to_uint - converts binary number to an unsigned int
 * @b: points to a string of 0 and 1 chars
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int a = 0;
	int h = 0;

	if (b == NULL)
		return (0);
	while (b[h])
	{
		if (b[h] == '0')
		{
			a = ((2 * a) + (b[h] - '0'));
		}
		else if (b[h] == '1')
		{
			a = ((2 * a) + (b[h] - '0'));
		}
		else
		{
			return (0);
		}
		h++;
	}
	return (a);
}
