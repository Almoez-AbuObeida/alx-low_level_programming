#include "main.h"

/**
* leet - a function that encodes a string into 1337.
* @s: string
* Return: @s.
*/

char *leet(char *s)
{
	int i, j;
	char *alpha = "aAeEoOtTlL";
	char *num = "43071";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; alpha[j] != '\0'; j++)
		{
			if (s[i] == alpha[j])
			{
				s[i] = num[j / 2];
			}
		}
	}

	return (s);
}
