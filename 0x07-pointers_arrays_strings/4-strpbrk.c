#include "main.h"

/**
* _strpbrk - a function that searches a string for
* any of a set of bytes.
* @s: string checked.
* @accept: string cosist of bytes should be counted.
* Return: @s.
*/

char *_strpbrk(char *s, char *accept)
{
	char *p;

	if ((s == NULL) || (accept == NULL))
		return (NULL);

	while (*s++)
	{
		while (*accept++)
		{
			if (*s == *accept)
			{
				p = s;
				break;
			}
		}
	}

	return (p);
}
