#include <stdio.h>

/**
*main - main function
(*
*Description: this function is going to print every number in
*three digits while the first is less than the second and the second
*is less than and the third)
*Return: This function will return 0
*/
int main(void)
{
	int i;

	for (i = 0; i <= 99; i++)
     {
	  	int j;

           for (j = i + 1; j <= 99; j++)
           {
               putchar((i / 10) + '0');
               putchar((i % 10) + '0');
               putchar(' ');
               putchar((j / 10) + '0');
               putchar((j % 10) + '0');
               if (i < 98 || j < 99)
               {
                   putchar(',');
                   putchar(' ');
               }
			}
      }
	putchar('\n');

	return (0);
}
