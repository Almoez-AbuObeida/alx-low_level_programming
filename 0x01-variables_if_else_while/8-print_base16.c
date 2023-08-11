#include <stdio.h>

/**
*main - main function
*Description: This function will print the base 16 numbers.)
*Return: 0
*/
int main(void)
{
	char i = '0';
	char c = 'a';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	while(c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
