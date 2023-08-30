#include "main.h"

/**
 *comparar - function that returns the power of number
 *@n: original number
 *@y: counter to compare multiplication
 *
 *Return: square root
 */
int checker(int n, int y)
{
	int i = 0;

	if (y <= n)
	{
		if (n % y == 0)
			i++;
		return (i + checker(n, y + 1));
	}
	return (i);
}

/**
* is_prime_number -  a function that returns 1 if the
* input integer is a prime number, otherwise return 0.
* @n: The number
* Return: 1 if prime 0 if no.
*/

int is_prime_number(int n)
{
	if (checker(n, 1) == 2)
		return (1);
	else
		return (0);
}
