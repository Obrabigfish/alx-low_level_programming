#include "main.h"
/**
 * _isdigit - checks for a digit
 * @c: variable to be checked
 * Return: 1 if digit else 0
 */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
