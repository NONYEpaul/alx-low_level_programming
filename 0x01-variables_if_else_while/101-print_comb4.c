#include <stdio.h>
/**
 *main - program that prints all possible different
 *Return: 0
 */
int main(void)
{
	int f1, f2, f3;

	for (f1 = 0; f1 < 8; f1++)
	{
		for (f2 = f1 + 1; f2 < 9; f2++)
		{
			for (f3 = f2 + 1; f3 < 10; f3++)
			{
			putchar((f1 % 10) + '0');
			putchar((f2 % 10) + '0');
			putchar((f3 % 10) + '0');

			if (f1 == 7 && f2 == 8 && f3 == 9)
				continue;

			putchar(',');
			putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
