#include "main.h"

/**
 * puts2 - outputs 1 char out of 2 of a string
 * with a newline
 * @str: string to print the char from
 * Return: always 0
 */
void puts2(char *str)
{
	int len, i;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
