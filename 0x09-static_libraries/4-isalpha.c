#include "main.h"

/**
* _isalpha - check if is alpha or not
(*
* @c: a character to check
* Return: 1 if char and 0 if not
*/

int _isalpha(int c)
{
	if (isalpha((char) c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
