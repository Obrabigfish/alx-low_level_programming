#include <stdio.h>
/**
 * main - print combination of two
 * Return: 0 (Success)
 */
int main(void)
{
int a;

int b;

a = '0';
b = '0';
for (b = '0'; b <= '9'; b++)
{
for (a = '0'; a <= '9'; a++)
{
if (!((a == b) || (b > a)))
{
putchar(b);
putchar(a);
if (!(a == '9' && b == '8'))
{
putchar(',');
putchar(' ');
}
}
}
}
putchar ('\n');
return (0);
}
