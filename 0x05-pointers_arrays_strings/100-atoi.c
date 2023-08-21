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
		if (s[i] <= '0' && s[i] >= '9')
		{
			j = j * 10 + s[i] - '0';
		}
		else if (s[i] == '+')
		{
			j *= 1; 
		}
		else if (s[i] == '-')
		{
			j *= -1;
		}
		else
		{
			return (0);
		}
		i++;
	}

	return (j);
}
