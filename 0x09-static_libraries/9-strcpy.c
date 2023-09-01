#include "main.h"

/**
* _strcpy -  A function that copies the string pointed to
* by src, including the terminating null byte (\0),
* to the buffer pointed to by dest.
* @dest: string to copy to.
* @src: source string.
* Return: @dest.
*/

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		char tmp = src[i];

		dest[i] = tmp;
	}

	dest[i] = '\0';

	return (dest);
}
