#include "main.h"

/**
* _strcmp - a function that compares two strings.
* @s1: first string
* @s2: second stirng
* Return: 0 if same, negative if first is less and positive
* if first is greater.
*/

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int str1 = 0;
	int str2 = 0;

	while (s1[i] != '\0')
	{
		if ((s1[i] >= 65 && s1[i] <= 90) || (s1[i] >= 97 && s1[i] <= 122))
		{
			str1 += (int)s1[i];
		}
		i++;
	}
	while (s2[j] != '\0')
	{
		if ((s2[i] >= 65 && s2[i] <= 90) || (s2[i] >= 97 && s2[i] <= 122))
		{
			str2 += (int)s2[i];
		}
		j++;
	}

	return (str1 - str2);
}
