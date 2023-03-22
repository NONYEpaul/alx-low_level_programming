#include "3-calc.h"
/**
 * op_add - function that adds to integer
 * @a: first integer to be added
 * @b: second integer to be added
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function that subtracts two integer
 * @a: first integer to be subtracted
 * @b: second integer to be subtracted
 * Return: difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function that multiplies two integer
 * @a: first integer to be multiplied
 * @b: second integer to be multiplied
 * Return: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function that divided two integers
 * @a: first integer to be divided
 * @b: second integer to be divided
 * Return: division
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - function that calculate remainder of a division
 * @a: first integer to be calculated
 * @b: second integer to be calculated
 * Return: remainder
 */
int op_mod(int a, int b)
{
	return (a % b);
}
