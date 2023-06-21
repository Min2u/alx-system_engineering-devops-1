#include "main.h"
#include <stdlib.h>

/**
 * *_memset - with a constant byte by memory fills
 * @n: num of time to copy b
 * @s: memory area to be filled
 * @b: copy the character
 *
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

/**
 * *_calloc - to allocates memory for an array
 * @size: all element of size
 * @nmemb: num of elements in the array
 *
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
