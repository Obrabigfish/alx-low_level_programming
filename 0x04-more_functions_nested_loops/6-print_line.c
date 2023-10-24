#include "main.h"
/**
 * print_line - prints staight line
 * @n: the number of times the character '_' should be printed
 */
void print_line(int n)
{
	char a = '_';

	while (n > 0)
	{
		putchar(a);
		n--;
	}
		if (n <= 0)
		{
			putchar('\n');
		}
}
