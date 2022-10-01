#include <stdio.h>
#include "main.h"

/**
 * main - print the number of arguments passed to the program
 * @argc: number of argument
 * @argv: array of argument
 *
 * Return: always 0
 */
int main(int argc, char *arg[] __attribute__((unused)), char *argv[])
{
	printf("%d\n", argv);

	return (0);
}
