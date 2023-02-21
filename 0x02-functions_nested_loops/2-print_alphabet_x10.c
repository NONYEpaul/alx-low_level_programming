#include "main.h"
/**
 * print_alphabet_x10 - function that prints 10 times the alphabet
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char alph;
	int x;

		for (x = 1; x <= 10; x++)
		{
			for (alph = 'a'; alph <= 'z'; alph++)
				_putchar(alph);

		_putchar('\n');
		}
}
