#include <stdio.h>
#include "main.h"

/**
 * main - number of arguments passed to the program to be print
 * @argc: arguments number
 * @argv: arruments array
 *
 * Return: Always 0(success)
 */

int main(int argc, char *argv[])
{
	(void) argv; /*ignore argv*/
		printf("%d/n", argc - 1);

	return (0);
}
