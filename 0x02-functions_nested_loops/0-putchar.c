#include <unistd.h>

/**
*main - main function
(*
*Description: prints a text.
*Return: 0
*/

int main(void)
{
	char *c = "_putchar";
	int i = 0;

	while (c[i] != \0)
	{
		_putchar(c[i]);
		i++;
	}

	return (0);
}
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
