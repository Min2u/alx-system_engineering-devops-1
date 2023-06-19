#include <stdio.h>
#include "main.h"

/**
 * main - all arguments to print 
 * @argc: arguments number
 * @argv: arguments array
 *
 * Return: Always 0(success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
