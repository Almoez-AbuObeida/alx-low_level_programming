#include "main.h"

/**
* times_table - print times table
(*
* Return: nothing
*/

void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			int c = i * j;

			if (j == 0)
			{
				_putchar(c + 48);
			}
			else if (c < 10 && j != 0)
			{
				_putchar(' ');
				_putchar(c + 48);
			}
			else
			{
				_putchar((c / 10) + 48);
				_putchar((c % 10) + 48);
			}
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
