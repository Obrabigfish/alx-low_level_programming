#include <stdio.h>
/**
 * main - gives the fibonnaci number
 * Return: 0
 */
int main(void)
{
	unsigned long int a = 1;
	unsigned long int b = 2;
	unsigned long int i;
	int next;

	printf("%lu, ", a);
	for (i = 0; i < 50; i++)
	{
		printf("%lu, ", b);
		next = a + b;
		a = b;
		b = next;
	}
	printf("\n");
	return (0);
}
