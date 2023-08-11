#include <stdio.h>

/**
*main - main function
(*
*Description: this function is going to print every number in
*three digits while the first is less than the second and the second
*is less than and the third)
*Return: This function will return 0
*/
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		int j;

		for (j = 0; j < 10; j++)
		{
			int k;

			for (k = 0; k < 10; k++)
			{
				int l;

				for (l = j + 1; l < 10; l++)
				{
					putchar(i + 48);
					putchar(j + 48);
					putchar(' ');
					putchar(k + 48);
					putchar(l + 48);
					if (i < 9 || j < 9 || k < 9 || l < 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
