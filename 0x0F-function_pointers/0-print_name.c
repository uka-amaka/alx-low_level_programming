#include "function_pointers.h"
#include<stdlib.h>

/**
 * print_name - print a name
 * @name: person name
 * @f: pointer to a function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
