#include "main.h"
#include <stdio.h>

/**
 * print_array - elements of an array of integers
 * @a: array of integers
 * @n: elements of array to be prnted
 * Return: 0
 */

void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
	printf("%d", a[j]);
	if (j != (n - 1))
	{
	printf(", ");
	}
	}
	printf("\n");
}
