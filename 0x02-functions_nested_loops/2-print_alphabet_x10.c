#include "main.h"

void print_alphabet_x10(void)
{
	char b = 'a';

	int i = 0;
	
	while (i < 10)
	{
		for (b = 'a'; b <= 'z'; b++)
	{
		_putchar(b);
	}
		_putchar('\n');
		i++;
	}
}
