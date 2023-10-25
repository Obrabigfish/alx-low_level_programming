#include <stdio.h>
#include <math.h>
/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
	long n = 612852475143;
	long i;

	for (i = 2; i <= n; i++)
	{
		while (n % i == 0)
		{
			n = n / i;
		}
		if (n == 1)
		{
			printf("%ld\n", i);
			break;
		}
	}
	return (0);
}
