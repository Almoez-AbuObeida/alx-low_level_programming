#include "main.h"

/**
* swap_int - a function that swaps the values of two integers.
* @a: integer
* @b: integer
* Return: Nothing.
*/

void swap_int(int *a, int *b)
{
	int c = *a;
	int d = *b;

	*a = d;
	*b = c;
}
