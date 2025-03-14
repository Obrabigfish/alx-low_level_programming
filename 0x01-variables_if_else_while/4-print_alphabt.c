#include <stdio.h>

int main()
{
	char a = 'a';
	while ( a <= 'z')
	{
		if (a == 'q' || a == 'e')
		{
			a++;
			continue;
		}
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
