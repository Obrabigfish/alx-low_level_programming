#include <stdio.h>

/*
 * main - Entry point of the program
 *
 * Description: This prints a message using the write() system call.
 *
 * Return: 1 (Error status)
 */
int main(void)
{
	char n[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
       	write(2, n, sizeof(n) - 1);
	return (1);
}
