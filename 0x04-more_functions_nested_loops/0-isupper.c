#include "main.h"

/**
* _isupper - check if it is upper or lower
* @c: integer to be checked
* Return: 1 if true and 0 if false
*/

int _isupper(int c)
{
	if (isupper((char) c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
