#include <stdio.h>
/**
 * main - Prints lowercase and uppercase
 * Return: 0 (Success)
 */

int main(void)
{
	char b;
	char c;

	b = 'a';
	c = 'A';
	while (b <= 'z')
	{
		putchar (b);
		b++;
	}
	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
