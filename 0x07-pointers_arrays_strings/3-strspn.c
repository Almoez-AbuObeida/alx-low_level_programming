#include "main.h"

/**
* _strspn - A function that gets the length of a prefix substring.
* @s: string to check
* @accept: string consist.
* Return: int.
*/

unsigned int _strspn(char *s, char *accept)
{
	int c = 0;
	int i = 0;

	if ((s == NULL) || (accept == NULL))
		return (c);

	while (s[i] != '\0')
	{
		while (*accept++ != '\0')
		{
			if (*s == *accept)
				c++;

			j++;
		}
		i++;
	}

	return (c);
}
