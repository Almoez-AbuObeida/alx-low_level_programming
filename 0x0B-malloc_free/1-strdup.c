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
	int len = strlen(str) + 1;
	char *dest = malloc(len);

	if (str == NULL || len == 0)
	{
		str = NULL;
	}
	else
	{
		memcpy(dest, str, len);
	}

	return (dest);
	free(dest);
}
