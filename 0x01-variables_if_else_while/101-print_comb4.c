#include <stdio.h>

/**
*main - main function
(*
*Description: this function is going to print every number in
*three digits while the first is less than the second and the second
is less than and the third)
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
			int k;

			for (k = j + 1; k < 10; k++)
			{
				putchar(i + 48);
				putchar(j + 48);
				if (i < 7 || j < 8 || k < 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
