#include "main.h"
#include <string.h>

/**
* _strpbrk - a function that searches a string for
* any of a set of bytes.
* @s: string checked.
* @accept: string cosist of bytes should be counted.
* Return: s.
*/
char *_strchr(char *s, char c);

char *_strpbrk(char *s, char *accept)
{
	if ((s == NULL) || (accept == NULL))
		return (NULL);

	while (*s)
	{
		if (strchr(accept, *s))
		{
			return (s);
		}
		else
		{
			*s++;
		}
	}

	return (NULL);
}
