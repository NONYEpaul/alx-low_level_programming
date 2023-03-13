#include "main.h"
#include <stdlib.h>
/**
 * _strdup - function returns a pointer to a new string
 * @str: string to duplicate
 * Return: duplicated string
 */
char *_strdup(char *str)
{
	int v = 0, l = 1;
	char *s;

	if (str == NULL)
		return (NULL);

	while (str[l])
	{
		l++;
	}

	s = malloc((sizeof(char) * l) + 1);

	if (s == NULL)
		return (NULL);

	while (v < l)
	{
		s[v] = str[v];
		v++;
	}

	s[v] = '\0';
	return (s);
}
