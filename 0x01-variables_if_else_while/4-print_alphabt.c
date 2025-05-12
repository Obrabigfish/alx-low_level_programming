#include <stdio.h>
/**
 * main - print except e and q
 * Return: Always (0)
 */

int main(void)
/*{
	char a;

	for(a = 'a'; a <= 'z'; a++)
	{
		if (a == 'q' || a == 'e')
		{
			continue;
		}
		putchar(a);
	}
	putchar('\n');
	return (0);
}*/
{
	char a = 'a';

	while (a <= 'z')
	{
		if (a == 'q' || a == 'e')
		{
			a++;
			continue;
		}
		putchar(a);
		a++;
	}
	putchar ('\n');
	return (0);
}
