#include "main.h"

/**
* guess - to guess the squar root.
* @n: the number
* @g: the guess number
* Return: the SQRT.
*/
int guess(int n, int g)
{
	if ((g * g) == n)
		return (g);

	if ((g * g) > n)
		return (-1);

	return (guess(n, g + 1));
}

/**
* _sqrt_recursion - a function that returns the natural
* square root of a number.
* @n: The number to get the squar root for.
* Return: The squar root.
*/

int _sqrt_recursion(int n)
{
	guess(n, 1);
}
