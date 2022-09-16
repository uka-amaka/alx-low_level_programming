#include "main.h"

/**
 * main: checks for a digit 0 - 9
 * @c: the number to be checked
 * Return: 1 if c is digit, other wise 0 thats it
 */
int _isdigit(int c);
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
