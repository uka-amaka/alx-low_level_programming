#include "main.h"
#include <stdio.h>

/**
 * *_strchr - locate a char in a string
 * @s: string to search from
 * @c: char to find
 *
 * Return: a pointer to the first occurrance or null/
 */
char *_strchr(char *s, char c)
{
	int a;

	while (1)
	{
		a = *s++;
		if (a == c)
		{
			return (s - 1);
		}
		if (a == 0)
		{
			return (NULL);
		}
	}
}
