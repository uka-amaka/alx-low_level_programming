#include "main.h"

/**
 * _puts - puts a string in stdout
 * @str: pointer to the put
 * Return: always 0
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
