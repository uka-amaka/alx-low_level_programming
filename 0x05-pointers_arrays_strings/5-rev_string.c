#include "main.h"

/**
 * rev_string - turns a string to reverse
 * @s: the string to be worked on
 * Return: always 0
 */

void rev_string(char *s)
{
	char tmp;

	int i, len, len1;

	len = 0;
	len1 = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	len1 = len - 1;

	for (i = 0; i < len / 2; i++)
	{
		tmp = s[i];
		s[i] = s[len1];
		s[len1--] = tmp;
	}
}
