#include "main.h"

/**
* main - print the number of arguments.
* @argv: Array of strings
* @argc: number of arguments.
* Return: 0;
*/

int main(int argc, char *argv[])
{
	print_number(argc);
}

/**
* print_number - a function that prints an integer.
* @n: integer.
* Return: nothing
*/

void print_number(int n)
{
	if (n / 10 > 0)
		print_number(n / 10);

	_putchar((n % 10) + '0');
}
