#include <stdio.h>
/**
 *main - Print number from base 10 to 0
 *Return: 0
 */
int main(void)
{
	int numb;

	for (numb = 0; numb <= 9; numb++)
	{
		putchar(numb + '0');
	}
	putchar('\n');
	return (0);
}
