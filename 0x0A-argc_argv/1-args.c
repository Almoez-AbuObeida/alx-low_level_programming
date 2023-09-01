#include "main.h"

/**
* main - print the number of arguments.
* @argv: Array of strings
* @argc: number of arguments.
* Return: 0;
*/

int main(int argc, char *argv[])
{
	int i;

	if (argc == 1)
		putchar('0');
	else
	{
		for (i = 0; *argv; i++, argv++)
			;

		_putchar((i - 1) + '0');
	}

	return (0);
}
