#include "main.h"

/**
* rot13 - a function that encodes a string using rot13.
* @s: string
* Return: @s.
*/

char *rot13(char *s)
{
	int i, j;
	char *h1 = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";
	char *h2 = "NnOoPpQqRrSsTtUuVvWwXxYyZzAaBbCcDdEeFfGgHhIiJjKkLlMm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; h1[j] != '\0'; j++)
		{
			if (s[i] == h1[j])
			{
				s[i] = h2[j];
				break;
			}
		}
	}

	return (s);
}
