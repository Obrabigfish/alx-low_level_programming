#include <stdio.h>
/**
 * main - print the alphabet in lowercase
 * Return: ALwayes (0)
 */
int main(void)
/**{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}*/
{
	char a = 'a';

	while (a <= 'z')
	{		
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
