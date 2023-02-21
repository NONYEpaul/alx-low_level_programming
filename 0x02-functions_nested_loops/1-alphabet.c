#include "main.h"

/**
 * main - function that prints the alphabet, in lowercase
 * Return: 0
*/
int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		_putchar(alph);
	}
	_putchar('\n');
}
