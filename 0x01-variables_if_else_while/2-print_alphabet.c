#include <stdio.h>
/**
 * main - Prints alphabet in lowercase
 * Return: 0 (Success)
 */

int main(void)
{
	char b;

	b = 'a';

	while (b <= 'z')
	{
		putchar(b);
		b++;
	}
	putchar('\n');
		return (0);
}
