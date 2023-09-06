#include "main.h"

/**
 * _strdup - function hat returns a pointer to a newly
 * allocated space in memory, which contains a copy of the
 * string given as a parameter.
 * @str: string.
 * Return: a pointer to a copy of @str.
 */

char *_strdup(char *str)
{
	if (str == NULL)
	{
		return (NULL);
	}

	char *s = malloc(sizeof(str));
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		s[i] = str[i];
	}

	return (s);
}
