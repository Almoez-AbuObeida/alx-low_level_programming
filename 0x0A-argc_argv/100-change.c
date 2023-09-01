#include "main.h"

/**
* main - count cents.
* @argv: arguments.
* @argc: number of arguments.
* Return: 0.
*/

int main(int argc, char *argv[])
{
	int cents, coins;

	cents = atoi(argv[1]);
	coins = 0;
	if (argc == 2)
	{
		if (cents >= 25)
		{
			cents -= 25;
			coins++;
		}
		else if (cents >= 10)
		{
			cents -= 10;
			coins++;
		}
		else if (cents >= 5)
		{
			cents -= 5;
			coins++;
		}
		else if (cents < 5)
		{
			cents -= 1;
			coins++;
		}
		printf("%d\n", coins);
	}
	else
	{
		printf("Error\n");

		return (1);
	}
	
	return (0);
}
