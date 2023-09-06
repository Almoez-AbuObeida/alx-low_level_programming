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
	char *dest = malloc(sizeof(str));

	if (str == NULL)
		return (NULL);

	strcpy(dest, str);

	return (dest);
	free(dest);
}
