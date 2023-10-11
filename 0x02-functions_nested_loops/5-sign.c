#include "main.h"
/**
 * print_sign - checks sign of integer
 * @n: is the integer to be checked
 * Return: 1 if int is greater, 0 if less, otherwise 1.
 */
int print_sign(int n)
{
	if (n > '0')
	{
		_putchar('+');
		return (1);
	}
	if (n == '0')
	{
		_putchar('0');
		return (0);
	}
	if (n < '0')
	{
		_putchar('-');
		return (-1);
	}
	_putchar('\n');
	return (0);
}
