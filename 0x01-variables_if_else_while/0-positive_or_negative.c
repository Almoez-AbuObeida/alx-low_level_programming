#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - main function
(*
*Description: This function is going to pick a random number
*and then declare if it's positive or negative or zero)
*Return: this function will return the type of the number
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}

	return (0);
}
