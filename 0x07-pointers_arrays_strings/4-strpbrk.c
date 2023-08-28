#include "main.h"

/**
* _strpbrk - a function that searches a string for
* any of a set of bytes.
* @s: string checked.
* @accept: string cosist of bytes should be counted.
* Return: s.
*/

char *_strpbrk(char *s, char *accept)
{
	if ((s == NULL) || (accept == NULL))
		return NULL;

	while (*s)
	{
		if (strchr(accept, *s))
		{
			return s;
		}
		else
		{
			*s++;
		}
	}

	return NULL;
}
