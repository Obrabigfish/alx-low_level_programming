#include <stdio.h>
/**
 * main - Prints hexadecimal in lowercase
 * Return: 0 (Success)
 */
int main(void)
{
	int a = 0;

	char b;

	b = '0';
	while (a < 10)
	{
		putchar(a + '0');
		a++;
	}
	while (b <= 'f')
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
