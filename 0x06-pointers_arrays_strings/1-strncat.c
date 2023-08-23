#include "main.h"

/**
* _strcat - a function that concatenates two strings.
* @dest: a string
* @src: a stirng
* Return: The tow strings @dest and @src.
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	dest[i] = ' ';
	while (j < n)
	{
		char tmp = src[j];

		dest[i + j] = tmp;
		j++;
	}

	return (dest);
}
