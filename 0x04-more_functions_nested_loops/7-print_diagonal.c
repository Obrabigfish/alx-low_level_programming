#include "main.h"
/**
 * print_diagonal - pints the diagonal line
 * @n: The number of times '\' to be printed
 */
void print_diagonal(int n)
{
	char i = '\\';
	int j;
	int spaces = 0;

	while (n > 0)
	{
		for (j = 0; j < spaces; j++)
		{
			putchar(' ');
		}
		putchar(i);
		n--;
		spaces++;
		putchar('\n');
	}
	if (n <= 0)
	{
		putchar('\n');
	}
}
