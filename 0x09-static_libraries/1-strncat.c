#include "main.h"

/**
* _strncat - a function that concatenates two strings.
* @dest: a string
* @src: a stirng
* @n: integer
* Return: The tow strings @dest and @src.
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;
	int k = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[k] != '\0')
	{
		k++;
	}
	while (src[j] != '\0' && j < n)
	{
		char tmp = src[j];

		dest[i + j] = tmp;
		j++;
	}
	dest[i + j] = '\0';

	return (dest);
}
