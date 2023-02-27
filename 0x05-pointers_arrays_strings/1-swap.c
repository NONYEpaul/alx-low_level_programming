#include <stdio.h>
#include "main.h"

/**
 * swap_int - swaps two integers
 * @a: first integer to be swapped
 * @b: seecond integer to be swapped
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
