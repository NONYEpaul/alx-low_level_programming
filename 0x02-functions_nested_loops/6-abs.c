#include "main.h"
/**
 * _abs - computes the absolute value of an int
 * @abs: absolute value
 * Return: 0
 */
int _abs(int abs)
{
	if (abs < 0)
		return (-abs);
	else
		return (abs);
}
