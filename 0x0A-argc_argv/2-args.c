#include "main.h"

/**
* main - print all arguments.
* @argv: array of strings.
* @argc: number of arguments.
* Return: (0);
*/

int main(int argc, char *argv[])
{
	int i;

	for (int i = 1; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
