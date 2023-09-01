#include "main.h"

/**
* main - print the name of the program.
* @argv: The array of strings.
* @argc: The number of arguments.
* Return: (0);
*/

int main(int argc, char *argv[])
{
	while (*argv[0] != '\0')
		_putchar(*argv[0]);
		argv[0]++;

	return (0);
}
