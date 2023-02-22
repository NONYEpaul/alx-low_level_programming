#include "main.h"
/**
 * _isalpha - check a char for letter lowercase uppercase
 * @c: char to be checked
 * Return: 1 if either is a letter
 * lowercase or uppercase else return 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
