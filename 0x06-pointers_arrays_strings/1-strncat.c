#include "main.h"

/**
* _strncat - a function that concatenates two strings.
* @dest: a string
* @src: a stirng
* @n: a number
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
	dest[i] = ' ';
	while (src[j] != '\0')
	{
		char c = src[j];

		dest[i] = c;
		j++;
	}
	while (src[k] != '\0')
	{
		k++;
	}
	if (n < k)
	{
		dest[i + n + 1] = '\0';
	}

	return (dest);
}
