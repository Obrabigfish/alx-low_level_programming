#include <stdio.h>
/**
 * main - gives the fibonnaci number
 * Return: 0
 */
int main(void)
{
	int a = 1;
	int b = 2;
	int i;
	int next;

	printf("%d, ", a);
	for (i = 0; i < 50; i++;)
	{
		printf("%d, ", b);
		next = a + b;
		a = b;
		b = next;
	}
	printf("\n");
	return (0);
}
