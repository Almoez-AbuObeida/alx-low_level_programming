#include "main.h"

/**
* main - print argv[1] * argv[2].
* @argv: arguments
* @argc: number of arguments.
* Return: 0.
*/

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error");

		return (1);
	}

	int a = atoi(argv[1]);
	int b = atoi(argv[2]);

	printf("%d\n", a * b);

	return (0);
}
