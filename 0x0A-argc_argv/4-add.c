#include "main.h"

/**
* main - print sum.
* @argv: arguments.
* @argc: number of arguments
* Return: 0.
*/

int main(int argc, char *argv[])
{
	int i, j, sum;

	if (argc == 1)
		printf("0\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			j = 0;
			while(argv[i][j] != '\0')
			{
				if (isalpha(argv[i][j]))
				{
					printf("Error\n");

					return (1);
				}
				j++;
			}
		}

		sum = 0;
		for (i = 1; i < argc; i++)
		{
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}

	return (0);
}
