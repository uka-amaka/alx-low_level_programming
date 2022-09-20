#include <stdio.h>
#include "main.h"

/**
 * print_array - outputs n elemrnts of an array of ints
 * followed by a newlin
 * @a: array to be outputed
 * @n: number of elements to be outputed
 * Return: always 0
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%d", a[i]);
		else
			printf(", %d", a[i]);
	}
	printf("\n");
}
