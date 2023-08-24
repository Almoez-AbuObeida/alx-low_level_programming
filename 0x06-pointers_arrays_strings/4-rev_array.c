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
	if (n % 2 == 0)
	{
		int num = n / 2;
		int i;

		for (i = 0; i < num; i++)
		{
			int j = a[i];
			int k = a[n];

			a[i] = k;
			a[n] = j;
			n--;
		}
	}
	else
	{
		int num = (n - 1) / 2;
		int i;

		for (i = 0; i < num; i++)
		{
			int j = a[i];
			int k = a[n];

			a[i] = k;
			a[n] = j;
			n--;
		}
	}
}
