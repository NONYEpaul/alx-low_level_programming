#include "main.h"
/**
 * pint_alphabet - Entry point
 * Description: a function that prints the alphabet
 * in lowercase followed by a new line
 * Return: void
*/
void print_alphabet(void)
{
	char alph = 'a';

	while (alph <= 'z')
	{
		_putchar(alph);
		alph++;
	}
	_putchar('\n');
}
