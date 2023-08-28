#include "main.h"

/**
* _strspn - A function that gets the length of a prefix substring.
* @s: string to check
* @accept: string consist.
* Return: int.
*/

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	int c = 0;

	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				c++;
				break;
			}
			j++;
		}
		i++;
	}

	return (c);
}
