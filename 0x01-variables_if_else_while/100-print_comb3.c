#include <stdio.h>

/**
*main - main function
(*
*Description: this function is going to print every number in
*two digits while the first is less than the second)
*Return: This function will return 0
*/
int main(void)
{
	int i = 0;
	int j = 0;

	while (i < 9)
	{
		while (j < 10 && j > i)
		{
			putchar(i + 48);
			putchar(j + 48);
			while (i < 9 && j > 9)
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
	}
	putchar('\n');

	return (0);
}
