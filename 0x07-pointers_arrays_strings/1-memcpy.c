#include "main.h"

/**
* _memcpy - A function that copies memory area.
* @dest: The memory area to copy to.
* @src: The memory area to copy from.
* @n: The mount of memory.
* Return: @dest or the memory copied to.
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	while (n--)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
