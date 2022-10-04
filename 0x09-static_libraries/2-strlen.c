#include "main.h"

/**
 * _strlen - will print out the lenght of a string
 *
 * @s: is the string to be checked
 *
 * Return: always 0
 */

int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
