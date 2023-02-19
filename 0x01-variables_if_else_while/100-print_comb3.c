#include <stdio.h>
/**
 *main - program that prints all possible different combinations of two digits
 *Return: 0
 */
int main(void)
{
	int f1, f2;

	for (f1 = 0; f1 < 10; f1++)
	{
	for (f2 = 0; f2 < 10; f2++)
	{
	putchar((f1 % 10) + '0');
	putchar((f2 % 10) + '0');

		if (f1 == 9 && f2 == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	}
	putchar('\n');

	return (0);
}
