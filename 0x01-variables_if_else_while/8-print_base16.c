#include <stdio.h>
/**
 *main - program that prints all the numbers of base 16 in lowercase
 *Return: 0
 */
int main(void)
{
	char numb;

	for (numb = '0'; numb <= '9'; numb++)
		putchar(numb);
	for (numb = '0'; numb <= '8'; numb++)
		putchar(numb);
	putchar('\n');
	return (0);
}
