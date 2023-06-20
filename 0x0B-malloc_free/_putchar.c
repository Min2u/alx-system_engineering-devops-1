#include "main.h"
#include <unistd.h>

/**
 * _putchar - the char writes c to stdout
 * @c: the char to print
 *
 * Return: on success 1
 * On error, -1 returned, and errno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
