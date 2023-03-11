#include <stdio.h>
#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: length of string to check
 * Return: length
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
	len++;
	return (len);
}
