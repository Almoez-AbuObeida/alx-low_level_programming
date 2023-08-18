#include "main.h"

/**
*_islower - if is lower or not
(*
*Return: 1 or 0
*/

int _islower(int c)
{
	if (islower((char) c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
