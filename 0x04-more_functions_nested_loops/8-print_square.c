#include "main.h"
/**
 * print_square - prints a square
 * @size: size of the square
 */
void print_square(int size)
{
	char b = '#';
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar(b);
		}
		_putchar('\n');
	}
}
