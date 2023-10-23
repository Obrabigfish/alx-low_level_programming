#include "main.h"
/**
 * print_most_numbers - searches for values
 */
void print_most_numbers(void)
{
	char b;

	for (b = '0'; b <= '9'; b++)
	{
		if (b != '2' && b != '4')
		{
			putchar(b);
		}
	}
	putchar('\n');
}
