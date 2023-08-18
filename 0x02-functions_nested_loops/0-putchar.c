#include "main.h"

/**
*main - main function
(*
*Description: prints a text.
*Return: 0
*/

int main(void)
{
	char *c = "_putchar";
	int i = 0;

	while (c[i] != '\0')
	{
		_putchar(c[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
