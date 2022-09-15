#include "main.h"

/**
 * main: same as what is under
 * _isupper - checks for uppercase character
 * @c: the character to be checked
 * Return: 1 if c is uppercase, 0 otherwise
 */
int main(void)
{
	char c;

	c = 'A';

	printf("%c: %d\n", c, _isuper(c));

	c = 'a';

	printf("%c: %\n", c, _isuper(c));

	return (0);
}
