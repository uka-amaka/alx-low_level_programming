#include "main.h"
#include <stdio.h>

/**
 * is lower - checks for lowercase character
 * @c: the character to check
 * return: 1 if c is lowercase, 0 otherwise
 */

int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
