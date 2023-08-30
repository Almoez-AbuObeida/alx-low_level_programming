#include "main.h"

/**
* _sqrt_recursion - a function that returns the natural
* square root of a number.
* @n: The number to get the squar root for.
* Return: The squar root.
*/

int _sqrt_recursion(int n)
{
	int guess = 0;

	if (n == 0)
		return (0);
	if (guess < n)
	{
		if (n / (guess * guess) == 1)
			return (guess);
	}

	guess++;

	return (-1);
}
