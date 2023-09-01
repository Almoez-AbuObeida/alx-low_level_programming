#include "main.h"

/**
* main - print the name of the program.
* @argv: The array of strings.
* @argc: The number of arguments.
* Return: (0);
*/

int main(int argc, char *argv[])
{
	int c = argc - 1;

	while (argv[0][c] != '\0')
	{
		_putchar(argv[0][c]);
		c++;
	}
	_putchar('\n');

	return (0);
}
