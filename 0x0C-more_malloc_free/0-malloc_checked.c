#include "main.h"
#include <stdlib.h>


/**
 * *malloc_checked - by using malloc allocates memory
 * @b: num of bytes to allocates
 *
 * Return: a pointerr to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
