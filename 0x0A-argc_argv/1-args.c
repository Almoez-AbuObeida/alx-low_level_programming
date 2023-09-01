#include "main.h"

/**
* main - print the number of arguments.
* @argv: Array of strings
* @argc: number of arguments.
* Return: 0;
*/

int main(int argc, char *argv[])
{
	int i = 0;

	while (argv[argc]--)
		i++;

	_putchar(i + '0');
	_putchar('\n');

	return (0);
}
