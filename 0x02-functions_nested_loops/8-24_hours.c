#include <stdio.h>
/**
 * jack_bauer - function prototype
 * @a - gives hour
 * @b - gives minutes
 */

void jack_bauer(void)
{
	int a;
	int b;

	for (a = 0; a < 24; a++)
	{
		for (b = 0; b < 60; b++)
		{
			putchar((a / 10) + '0');
			putchar((a % 10) + '0');
			putchar(':');
			putchar((b / 10) + '0');
			putchar((b % 10) + '0');
			putchar('\n');
		}
	}
}
