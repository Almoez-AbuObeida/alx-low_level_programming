#include <unistd.h>

int _putchar(char c);
/**
*main - main function
(*
*Description: prints a text.
*Return: 0
*/

int main(void)
{
	char c[8] = "_putchar";
	int i = 0;

	for (int i = 0; i < 8; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');

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
