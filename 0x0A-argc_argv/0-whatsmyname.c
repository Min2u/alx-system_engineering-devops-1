#include <stdio.h>
#include "main.h"

/**
 * main - program name to print
 * @argc: arguments number
 * @argv: arguments array
 *
 * Return: always 0(success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
