#include "main.h"

/**
* _strcat - a function that concatenates two strings.
* @dest: a string
* @src: a stirng
* Return: The tow strings @dest and @src.
*/

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	dest[i] = ' ';
	while (src[j] != '\0')
	{
		char tmp = src[j];

		dest[i + j] = tmp;
		j++;
	}
	dest[i + j] = '\0';

	return (dest);
}
