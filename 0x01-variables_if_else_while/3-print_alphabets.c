#include <stdio.h>
int main()
{
	char a = 'a', b = 'A';
	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	while (b <= 'Z')
	{
		putchar(b);
		b++;
	}
	return (0);
}
