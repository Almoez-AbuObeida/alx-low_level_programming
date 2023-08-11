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
	int i;
	for (i = 0; i < 10; i++)
	{
		int j;
		for (j = i + 1; j < 10; j++)
		{
			putchar(i + 48);
			putchar(j + 48);
			if (i < 8 || j < 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
