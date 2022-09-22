#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: string 1 to compare
 * @s2: string 2 to compare
 *
 * Return: less than 0 if string 1 is less than s2, 0 if they are 
 * equal more than 0 if s1 is greater than s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
