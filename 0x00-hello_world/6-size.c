#include <stdio.h>
/**
 * main - Entry
 * Return: 0 (Always)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of a char: %d bytes", (unsigned long)sizeof(a));
	printf("Size of an int: %d bytes", (unsigned long)sizeof(b));
	printf("Size of a long int: %d bytes", (unsigned long)sizeof(c));
	printf("Size of a long long int: %d bytes", (unsigned long)sizeof(d));
	printf("Size of s float: %f bytes", (unsiigned long)sizeof(f));
	return (0);
}
