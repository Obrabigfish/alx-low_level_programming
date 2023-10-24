#include "main.h"
/**
 * more_numbers - prints numbers
 */
void more_numbers(void)
{
	int c;
	int b;

	for (b = 0; b < 10; b++)
	{
	for (c = 0; c <= 14; c++)
	{
		if (c > 9)
	{
		putchar(c / 10 + '0');
	}
	putchar(c % 10 + '0');
	}
	putchar('\n');
	}
}
