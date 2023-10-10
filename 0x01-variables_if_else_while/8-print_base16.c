#include <stdio.h>
/**
 * main - Prints hexadecimal in lowercase
 * Return: 0 (Success)
 */
int main(void)
{
	char b = '0';

	while (b <= 'f')
	{
		putchar(b);
		if (b == '9')
		{
			b = 'a';
		}
		else
		{
			b++;
		}
	}
	putchar('\n');
	return (0);
}
