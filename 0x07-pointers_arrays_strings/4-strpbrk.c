#include "main.h"

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
		if (_strchr(accept, *s))
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

/**
* _strchr - A function that locates a character in a string.
* @s: A string to locat characters.
* @c: A char to locat.
* Return: a pointer if found or NULL if not.
*/

char *_strchr(char *s, char c)
{
	char *p = NULL;
	/*handling null pointer*/
	if (s != NULL)
	{
		while (*s++)
		{
			if (*s == c)
			{
				p = s;
				break;
			}
		}
	}

	return (p);
}
