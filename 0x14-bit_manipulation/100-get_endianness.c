#include "main.h"
/**
 * get_endianness - function that checks the endianness
 * Return: 0 or 1
 */
int get_endianness(void)
{
	int a = 1;
	char *endian = (char *)&a;

	if (*endian == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
