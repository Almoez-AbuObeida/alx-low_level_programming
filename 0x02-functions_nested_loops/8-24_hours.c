#include "main.h"

/**
* jack_bauer - print all minuts
(*
* Return: nothing
*/

void jack_bauer(void)
{
	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			int k, l;

			_putchar(i +48);
			_putchar(j + 48);
			_putchar(':');

			for (k = 0; k < 60; k++)
			{
				for (l = 0; l < 60; l++)
				{
					_putchar(k + 48);
					_putchar(l + 48);
					_putchar('\n');
				}
			}
		}
	}
	
}
