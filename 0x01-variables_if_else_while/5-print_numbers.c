#include <stdio.h>

/**
*main - main function
(*
*Description: this function will print numbers from 0 to 9)
*Retrun: 0
*/
int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		printf("%d", i);
		i++;
	}
	printf("\n");

	return (0);
}
