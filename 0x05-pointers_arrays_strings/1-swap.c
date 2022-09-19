#include "main.h"

/**
 * swap_int - function that swaps a and b withe help of c
 *
 * @a: swaps b to a
 * @b: swaps a to b
 * Return: always 0
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

