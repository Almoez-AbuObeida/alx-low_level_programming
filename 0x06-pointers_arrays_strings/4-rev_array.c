#include "main.h"

/**
* reverse_array - a function that reverses the content of
* an array of integers.
* @a: an array of integer.
* @n: number of the elements of the array.
* Return: nothing.
*/

void reverse_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		int tmp = a[i];

		a[i] = a[n-1];
		n--;
		i++;
	}
}
