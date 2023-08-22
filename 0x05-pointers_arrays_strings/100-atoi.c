#include "main.h"

/**
* _atoi - function that convert a string to an integer.
* @s: The string.
* Return: 0.
*/
int _atoi(char *s)
{
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			j = j * 10 + s[i] - '0';
		 	if (s[i] == '-')
			{
				j = -j;
			}
			if (s[0] == '-')
			{
				j = j * -1;
			}
		}
		i++;
	}

	return (j);
}
