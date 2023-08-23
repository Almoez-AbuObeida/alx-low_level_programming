#include "main.h"

/**
* _strncpy - a function that copies a string.
* @dest: a string "copy to"
* @src: a string "copy from"
* @n: a number to copy to.
* Return: @dest.
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		char c = src[i];

		dest[i] = c;
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
