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
	char *s;
	if (str == NULL)
	{
		return (NULL);
	}
	int l = strlen(str) + 1;

	s = malloc(l);
	s = memcpy(s, str, l);

	return (s);
	free(s);
}
