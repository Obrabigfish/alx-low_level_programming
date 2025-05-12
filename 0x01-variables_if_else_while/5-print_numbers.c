#include <stdio.h>
/**
 * main - print single digit numbers
 * return: Always (0)
 */

int main(void)
{
	char a;

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
