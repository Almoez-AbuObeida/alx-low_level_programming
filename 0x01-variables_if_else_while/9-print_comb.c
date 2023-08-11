#include <stdio.h>

/**
*main - main funcion
(*
*Description: This function will print numbers from 0 to 9
*separated by ,
*Return: 0
*/
int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		putchar(48 + n);
		putchar(',');
		putchar(' ');
		n++;
	}
	putchar('\n');

	return (0);
}
