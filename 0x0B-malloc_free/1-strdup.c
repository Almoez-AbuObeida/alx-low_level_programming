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
	char *dest;
	int len = strlen(str) + 1;

	dest = malloc(len);
	memcpy(dest, str, len);

	return (dest);
	free(dest);
}
