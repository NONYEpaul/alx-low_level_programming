#include "main.h"
/**
 * _strcmp - compare different strings of values
 * @s1: input value to compare
 * @s2: input value to be compared
 * @s2: input value to be compared
 * Return: s1[i] - s2[i]
 */
int _strcmp(char *s1, char *s2)
{
	int p;

	p = 0;
	while (s1[p] != '\0' && s2[p] != '\0')
	{
		if (s1[p] != s2[p])
		{
			return (s1[p] - s2[p]);
		}
		p++;
	}
	return (0);
}
